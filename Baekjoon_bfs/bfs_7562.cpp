#include<iostream>
#include<vector>
#include<queue>
#define MAX 301
using namespace std;

int T, I, curX, curY, desX, desY;
int _x[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int _y[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int map[MAX][MAX];
int visited[MAX][MAX];
queue<pair<int, int> > q;

int bfs(int y, int x){
	visited[y][x] = 1;
	q.push(make_pair(y, x));
	
	while(!q.empty()){
		int queueSize = q.size();
		
		for(int j = 0; j < queueSize; j++){
			int b = q.front().first;
			int a = q.front().second;
			q.pop();
			
			if(b == desY && a == desX) break;
			
			for(int i = 0; i < 8; i++){
				int xx = a + _x[i];
				int yy = b + _y[i];
				if(xx >= 0 && yy >= 0 && xx <= I && yy <= I){
					if(!visited[yy][xx] && map[yy][xx] == 0){
						q.push(make_pair(yy, xx));
						visited[yy][xx] = visited[b][a] + 1;
					}
				}
			}
		}
	}
	
	return visited[desY][desX] - 1;
}

void Initialize(){
	for(int i = 0; i < I; i++){
		for(int j = 0; j < I; j++){
			map[i][j] = 0;
			visited[i][j] = 0;
		}
	}
	
	int queueSize = q.size();
	for(int i = 0; i < queueSize; i++){
		q.pop();
	}
}

int main(void){
	
	cin >> T;
	int result[T];
	
	for(int i = 0; i < T; i++){
		result[i] = 0;
	}
	
	for(int t = 0; t < T; t++){
		cin >> I >> curX >> curY >> desX >> desY;
		Initialize();
		
		result[t] = bfs(curY, curX);
	}
	
	for(int t = 0; t < T; t++){
		cout << result[t] << "\n";
	}
	
	return 0;
}
