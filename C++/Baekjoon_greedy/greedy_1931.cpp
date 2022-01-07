#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100001
using namespace std;

int n = 0;
vector<pair<int, int> > arr;

int sum(int m)
{
	int count = 0;
	int last = 0;
	for(int i = 0; i < m; i++)
	{
		if(last <= arr[i].first)
		{
			last = arr[i].second;
			count++;
		}
	}
	return 	count;
}

bool compare(pair<int, int> a, pair<int, int> b)
{
	if(a.second != b.second)
	{
		return a.second < b.second;
	}
	return a.first < b.first;
}

int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int a = 0, b = 0;
		cin >> a >> b;
		arr.push_back(make_pair(a,b));
	}
	
	sort(arr.begin(), arr.end(), compare);
	
	//지우기 
	cout << endl;
	cout << "정렬" << endl;
	for(int i = 0; i < n; i++)
	{ 
		cout << arr[i].first << ' ' << arr[i].second << endl;
	}
	cout << endl;
	
	cout << sum(n);
	
	return 0;
}
