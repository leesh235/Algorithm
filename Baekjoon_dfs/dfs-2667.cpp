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
			//�ش� ��ǥ�� �����¿찡 �����ϰ� �湮���� �ʾ����� dfs ����
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
			//�ش� ��ǥ�� �����ϸ� �湮���� �ʾ��� �� dfs ����
			//�ش� ��ǥ�� dfs�� ���� ���� ��ǥ���� dfs�� ���� �����̹Ƿ�
			//�湮 ���θ� Ȯ�����ָ� cnt�� �����κп����� ���� ���� ������.
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
