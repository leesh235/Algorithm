#include <iostream>
#include<algorithm>
#define MAX 1001
using namespace std;

int n, result;
int pi[MAX];
int accumulate[MAX];

int ATM(int x)
{
	sort(pi+1 , pi + x + 1);

	int sum = 0;
	for(int i = 1; i <= x ; i++)
	{
		sum += pi[i];
		accumulate[i] = sum;

	}
	for(int i = 1; i <= x; i++)
	{
		result += accumulate[i];
	}
	
	return result;
}

int main(void)
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		pi[i] = x;
	}
	
	cout << ATM(n);
	
	return 0;
}
