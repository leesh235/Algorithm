#include<iostream>
#include<queue> 
#define N 101
#define M 101
using namespace std;

int n, m, result = 1;
int _x[4] = {1, 0, -1, 0};
int _y[4] = {0, 1, 0, -1};
int c[N][M];
char arr[N][M];
	
void bfs(int a, int b)
{
	queue<pair<int, int> > q;
	q.push(make_pair(a, b));
	c[a][b] = 1;
	while(!q.empty())
	{
		pair<int, int> x = q.front();
		if(x.first == n && x.second == m)
		{
			cout << c[n][m];
			break;
		}
		q.pop();
	
		for(int i = 0; i < 4; i++)
		{
			int xl = x.second + _x[i];
			int yl = x.first + _y[i];
			if(xl > 0 && xl <= m && yl > 0 && yl <= n)
			{
				if(arr[yl][xl] == '1' && c[yl][xl] == 0)
				{
					q.push(make_pair(yl, xl));
					c[yl][xl] = 1 + c[x.first][x.second];
				}
			}
		}
	}
}

int main(void)
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	bfs(1, 1);

	return 0;
}
