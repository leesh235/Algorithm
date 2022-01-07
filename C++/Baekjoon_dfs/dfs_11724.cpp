#include <iostream>
#include <vector>

using namespace std;

int n = 0, m = 0; // 정점의 개수, 간선의 개수
int u = 0, v = 0; //간선에 연결된 양 끝점
vector<int> indegree[1001]; //간선
bool check[1001]; //정점 방문 처리 
int count = 0; //연결 요소 개수 
 
void dfs(int x){
	if(check[x]) return;
	check[x] = true;
	
	for(int i = 0; i < indegree[x].size(); i++){
		int y = indegree[x][i];
		dfs(y);
	}
}
 
int main(void)
{ 
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> u >> v;
		indegree[u].push_back(v);
		indegree[v].push_back(u);
	}
	
	for(int i = 1; i <= n; i++){
		if(check[i]==false)
		{
			dfs(i);
			count++;
		}
	}
	
	cout << count;
   
   return 0; 
}
