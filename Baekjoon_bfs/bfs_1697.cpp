#include<iostream>
#include<queue>
#define MAX 100001
using namespace std;

int n, k;
queue<int> q;
int visited[MAX];
int _x[2] = {-1, 1};

int bfs(int x){
	q.push(x);
	visited[x] = 1;
	
	while(!q.empty()){
		int a = q.front();
		q.pop();
		
		if(a == k) break;
		
		for(int i = 0; i < 3; i++){
			int xx;
			if(i == 2){
				xx = a * 2;
			}
			else{
				xx = a + _x[i];
			}
			
			if(xx >= 0 && xx <= 100000){
				if(!visited[xx]){
					q.push(xx);
					visited[xx] = visited[a] + 1;
				}
			}
		}
	}
	
	return visited[k] - 1;
}

int main(void){
	
	cin >> n >> k;
	
	cout << bfs(n);
	
	return 0;
}
