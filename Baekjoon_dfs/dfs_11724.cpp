#include <iostream>
#include <vector>

using namespace std;

int n = 0, m = 0; // ������ ����, ������ ����
int u = 0, v = 0; //������ ����� �� ����
vector<int> indegree[1001]; //����
bool check[1001]; //���� �湮 ó�� 
int count = 0; //���� ��� ���� 
 
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
