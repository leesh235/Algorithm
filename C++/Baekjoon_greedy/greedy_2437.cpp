#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;

int main(void)
{
	int sum = 0;
	int n;
	cin >> n;
	for(int i =0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	
	sort(arr.begin(), arr.end());
	
	if(arr[0] != 1)
	{
		cout << 1;
	}
	else
	{
		sum = 1;
		for(int i = 1; i < n; i++)
		{
			if(arr[i] > sum + 1) break;
			sum += arr[i];
		}
		cout << sum + 1;
	}
    
    return 0;
}
