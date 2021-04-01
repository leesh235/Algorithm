#include <iostream>
#define MAX 51
using namespace std;

int n = 0, m = 0;
char A[MAX][MAX] = {0, };
char B[MAX][MAX] = {0, };

void operation(int x, int y)
{
	for(int i = x; i < x + 3; i++)
	{
		for(int j = y; j < y + 3; j++)
		{
			if(A[i][j] == '0') A[i][j] = '1';
			else A[i][j] = '0';
		}
	}
}

int main(void)
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> B[i][j];
		}
	}
	
	int count = 0;
	for(int i = 0; i < n - 2; i++)
	{
		for(int j = 0; j < m - 2; j++)
		{
			if(A[i][j] != B[i][j])
			{
				operation(i, j);
				count++;
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(A[i][j] != B[i][j])
			{
				cout << -1;
				return 0;
			}
		}
	}
	
	cout << count;
	
	return 0;
}
