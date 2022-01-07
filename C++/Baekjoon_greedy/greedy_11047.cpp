#include <iostream>

using namespace std;

int main(void)
{
	int n = 0, m = 0, result = 0;
	
	cin >> n >> m;
	
	int ai[n] = {0, };
	
	for(int i = 1; i <= n; i++)
	{
		int x = 0;
		cin >> x;
		ai[i] = x;
	}
	
	for(int i = n; i > 0; i--)
	{
		result += m / ai[i];
		m %= ai[i];
	}
	cout << result;
	
	
	return 0;
}
