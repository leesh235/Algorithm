#include <iostream>

using namespace std;

int main(void)
{
	int n, count = 0;
	cin >> n;
	if(n % 5 == 0 && n >= 0)
	{
		cout << n / 5;
		return 0;
	}
	while(1)
	{
		n -= 3;
		count++;
		if(n % 5 == 0 && n >= 0)
		{
			cout << n / 5 + count;
			return 0;
		}
		if(n < 0) 
		{
			cout << -1;
			break;
		}
	}

	return 0;
}
