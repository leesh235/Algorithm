#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;

queue<pair<pair<int, int>, int> > q;
int m, n;
int _x[4] = {0, 0, -1, 1};
int _y[4] = {-1, 1, 0, 0};
int c [MAX][MAX] = {0};
int arr[MAX][MAX];
int count = 0;
int z = 0;

void bfs()
{
	while(!q.empty())
	{
		pair<pair<int, int>, int> a = q.front();
		count = a.second;
		
		q.pop();
		
		for(int i = 0; i < 4; i++)
		{
			int yy = _y[i] + a.first.first;
			int xx = _x[i] + a.first.second;
			if(yy >= 0 && yy < n && xx >= 0 && xx < m)
			{
				if(arr[yy][xx] == 0 && c[yy][xx] == 0)
				{
					q.push(make_pair(make_pair(yy, xx), count + 1));
					c[yy][xx] = 1;
					arr[yy][xx] = 1;
				}
			}
		}
	}
}

void check()
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(arr[i][j] == 0 && c[i][j] == 0)
			{
				z = -1;
				break;
			}
		}
	}
}

int main(void)
{
	cin >> m >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if(arr[i][j] == 1)
			{
				c[i][j] = 1;
				q.push(make_pair(make_pair(i, j), 0));
			}
		}
	}
	
	bfs();
	check();
	
	if(z == -1)
	{
		cout << z;
	}
	else
	{
		cout << count;
	}
	
	return 0;
}
