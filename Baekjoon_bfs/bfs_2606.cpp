#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m, a, b;
bool c[100];

int main(void)
{ 
	bool c[100];
	int n, m, a, b;
	cin >> n;
	cin >> m;
	vector<int> indegree[101];
	
	for(int i = 0; i < m; i ++){
		cin >> a >> b;
		indegree[a].push_back(b);
		indegree[b].push_back(a);
	}
	
	queue<int> q;
	q.push(1);
	c[1] = true;
	int cnt = 0;
	
	while(!q.empty()){
		int y = q.front();
		q.pop();
		cnt += 1;
		
		for(int i = 0; i < indegree[y].size(); i++){
			int z = indegree[y][i];
			if(!c[z]){
				c[z] = true;
				q.push(z);
			}
		}	
	}
	
	cout << cnt - 1;
   
   return 0; 
}
