#include <iostream>
#include <vector>
#define MAX 11
using namespace std;

int n = 0;
vector<int> number(MAX);
vector<int> ans(MAX, -1);

int main(void)
{
	//input 
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> number[i];
	}
	
	ans[number[0] + 1] = 1;
	for(int i = 1; i < n; i++)
	{
		int cnt = 0;
		for(int j = 1; j <= n; j++)
		{
			if(cnt == number[i] && ans[j] == 0)
			{
				ans[j]= i + 1;
				break;
			}
			if(ans[j] > i + 1 || ans[j] == 0)
			{
				cnt++;
			}
		}
 	}
	
	//output
	for(int i = 0; i < n; i++)
	{
		cout << ans[i] << ' ';
	}
	
	return 0;
}
