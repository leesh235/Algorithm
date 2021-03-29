#include <iostream>
#include <queue>
#include <cstring>
#define MAX 101
using namespace std;

//row, col, height
int m, n, h;
//matrix
int arr[MAX][MAX][MAX];
//방문여부
int visited[MAX][MAX][MAX];
//일수 체크, 익은 토마토 여부 체크 
int cnt, result;
//상하좌우위아래
int _x[4] = {0, 0, -1, 1};
int _y[4] = {-1, 1, 0, 0};
int _z[2] = {-1, 1};//z를 움직을 땐 x, y에 변화가 없어야한다.
					//즉 x, y로 bfs, z로 bfs 총 두번 해준다. 
//큐생성
queue<pair<int, pair<int, pair<int, int> > > > q; 

void bfs(){
	
	while(!q.empty()){
		int cz = q.front().first;
		int cy = q.front().second.first;
		int cx = q.front().second.second.first;
		cnt = q.front().second.second.second;
		q.pop();
		
		//x, y 체크 
		for(int i = 0; i < 4; i++){
			int xx = cx + _x[i];
			int yy = cy + _y[i];
			if(xx >= 0 && yy >= 0 && xx < m && yy < n){
				if(arr[cz][yy][xx] == 0 && visited[cz][yy][xx] == 0){
					q.push(make_pair(cz, make_pair(yy, make_pair(xx, cnt + 1))));
					arr[cz][yy][xx] = 1;
					visited[cz][yy][xx] = 1;
				}
			}
		}
		//z 체크
		for(int i = 0; i < 2; i++){
			int zz = cz + _z[i];
			if(zz >= 0 && zz < h){
				if(arr[zz][cy][cx] == 0 && visited[zz][cy][cx] == 0){
					q.push(make_pair(zz, make_pair(cy, make_pair(cx, cnt + 1))));
					arr[zz][cy][cx] = 1;
					visited[zz][cy][cx] = 1;
				}
			}
		} 
	}
}

void check(){
	for(int k = 0; k < h; k++){
		for(int j = 0; j < n; j++){
			for(int i = 0; i < m; i++){
				if(arr[k][j][i] == 0 && visited[k][j][i] ==0){
					result = -1;
					break;
				}
			}
		}
	}
}

int main(void)
{
	cin >> m >> n >> h;
	for(int k = 0; k < h; k++){
		for(int j = 0; j < n; j++){
			for(int i = 0; i < m; i++){
				cin >> arr[k][j][i];
				if(arr[k][j][i] == 1){
					visited[k][j][i] = 1;
					q.push(make_pair(k, make_pair(j, make_pair(i, 0))));
				}
			}
		}
	}
	
	bfs();
	check();
	
	if(result == -1){
		cout << result;
	}else{
		cout << cnt;
	}
	
	return 0;
}
