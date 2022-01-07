#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1001
using namespace std;

bool cd[MAX] = {0, }; //dfs 방문 처리 
bool cb[MAX] = {0, }; //bfs 방문 처리 
vector<int> arr[MAX]; //정점의 개수만큼 벡터생성 

void dfs(int x)
{
	if(cd[x]) return;
	cd[x] = true;
	cout << x << ' ';
	for(int i = 0; i < arr[x].size(); i++)
	{
		int y = arr[x][i];
		dfs(y);
	}
}

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	cb[start] = true;
	while(!q.empty())
	{
		int a = q.front();
		q.pop();
		cout << a << ' ';
		for(int i = 0; i < arr[a].size(); i++)
		{
			int b = arr[a][i];
			if(!cb[b])
			{
				q.push(b);
				cb[b] = true;
			}
		}
	}	
}

int main(void)
{
	int n, m, s; //정점의 개수, 간선의 개수, 시작점 
	cin >> n >> m >> s;
	//간선의 개수만큼 연결하기 
	for(int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}
	
	for(int i = 1; i <= n; i++)
	{
		sort(arr[i].begin(), arr[i].end());
	}
	
	//dfs output
	dfs(s);

	cout << endl;
	
	//bfs output
	bfs(s);
	
	return 0;
} 


