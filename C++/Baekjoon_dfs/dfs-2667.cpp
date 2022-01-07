#include <iostream>
#include <algorithm>
#define MAX 25
using namespace std;

int n, cnt = 0;
int _x[4] = { -1, 1, 0, 0 };
int _y[4] = { 0, 0, -1, 1 };
char arr[MAX][MAX];
int c[MAX][MAX];
int result[313];

void dfs(int y, int x)
{
	c[y][x] = cnt;
	result[cnt]++;
	for(int i = 0; i < 4; i++)
	{
		int yy = y + _y[i];
		int xx = x + _x[i];
		if(xx >= 0 && yy >= 0 && xx < n && yy < n)
		{
			//해당 좌표의 상하좌우가 존재하고 방문하지 않았을때 dfs 실행
			if(arr[yy][xx] == '1' && c[yy][xx] == 0)
			{
				dfs(yy, xx);
			}
		}
	}
}

int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			//해당 좌표가 존재하며 방문하지 않았을 때 dfs 실행
			//해당 좌표의 dfs로 인해 인접 좌표들의 dfs가 끝난 상태이므로
			//방문 여부를 확인해주면 cnt가 인접부분에서는 같은 값은 가진다.
			if(arr[i][j] == '1' && c[i][j] == 0)
			{
				cnt++;
				dfs(i, j);
			}
		}
	}
	
	cout << cnt << endl;
	
	sort(result + 1, result + cnt + 1);
	
	for(int i = 0; i < cnt; i++)
	{
		cout << result[i + 1] << endl;
	}
	
	return 0;
} 
