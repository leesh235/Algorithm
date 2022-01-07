#include<iostream>
#include<queue>
#include<cmath>
#define MAX 101
using namespace std;

int map[MAX][MAX];
int visited[MAX][MAX];
queue<pair<int, pair<int, int> > > q;
queue<pair<int, int> > qq;
int _y[4] = {0, 0, -1, 1};
int _x[4] = {-1, 1, 0, 0};
int n, l, r, cnt = 0;

void bfs(int y, int x){
	visited[y][x] = 1;
	int count = 1, sum = map[y][x];
	q.push(make_pair(cnt, make_pair(y, x)));
	qq.push(make_pair(y, x));
	
	while(!q.empty()){
		int b = q.front().second.first;
		int a = q.front().second.second;
		q.pop();
		cnt++;
		
		for(int i = 0; i < 4; i++){
			int yy = b + _y[i];
			int xx = a + _x[i];
			
			if(yy >= 0 && xx >= 0 && yy < n && xx < n){
				int des = abs(map[yy][xx] - map[b][a]);
				if((des >= l && des <= r) && !visited[yy][xx]){
					visited[yy][xx] = 1;
					q.push(make_pair(cnt, make_pair(yy, xx)));
					sum += map[yy][xx];
					count++;
					qq.push(make_pair(yy, xx));
				}
			}
		}
	}
	
	while(!qq.empty()){
		int b = qq.front().first;
		int a = qq.front().second;
		qq.pop();
		
		map[b][a] = sum / count;
	}
	
}

int main(void){
	
	cin >> n >> l >> r;
	map[n][n];
	visited[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			map[i][j] = 0;
			visited[i][j] = 0;
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> map[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(!visited[i][j]){
				bfs(i, j);
			}
		}
	}
	
	cout << cnt;
	
	return 0;
}
