//여러개가 들어왔을때 로프를 다 쓰는 것보다 몇가지를 골라 쓰는것이
//최대하중이 더 높을 수 있다. !! 
#include <iostream>
#include <algorithm>
#define MAX 100001

using namespace std;

int main(void)
{
	int n = 0;
	int max = 0;
	int len[MAX];
	
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> len[i];
	}
	
	sort(len, len + n);
	
	for(int i = 0; i < n; i++)
	{
		if(max < len[i] * (n - i))
		{
			max = len[i] * (n - i);
		}
	}
	
	cout << max;
	
	return 0;
}
