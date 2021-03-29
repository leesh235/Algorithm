#include<iostream>
#include<cstring>
#include<queue>
#define MAX 50
using namespace std;

//tastcase, row, col, number
int T, m, n, k;
//matrix(x, y), 벌레마리수 
int x, y, cnt;
//MAX * MAX matrix 
int arr[MAX][MAX];
//상하좌우
int _x[4] = {0, 0, -1, 1};
int _y[4] = {-1, 1, 0, 0};
//방문여부 확인
int check[MAX][MAX];
 
//bfs
void bfs(int b, int a){
	check[b][a] = 1;
	queue<pair<int, int> > q;
	q.push(make_pair(b, a));
	
	while(!q.empty()){
		pair<int, int> temp = q.front();
		q.pop();
		
		for(int i = 0; i < 4; i++){
			int xx = temp.second + _x[i];
			int yy = temp.first + _y[i];
			if(xx >= 0 && yy >= 0 && xx < m && yy < n){
				if(arr[yy][xx] == 1 && check[yy][xx] == 0){
					q.push(make_pair(yy, xx));
					check[yy][xx] = 1;
				}
			}
		}
		
	}
}

int main(){
    
    cin >> T;
    int result[T] = {0, };
    
    for(int t = 0; t < T; t++){
    	cin >> m >> n >> k;
    	
    	memset(arr, 0, sizeof(arr));
		memset(check, 0, sizeof(check));
    	cnt = 0;
    	
    	for(int i = 0; i < k; i++){
    		cin >> x >> y;
    		arr[y][x] = 1;
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(arr[i][j] == 1 && check[i][j] == 0){
					bfs(i, j);
					cnt++;
				}
			}
		}
		
		cout << cnt << "\n";
	}
    
    return 0;
}
