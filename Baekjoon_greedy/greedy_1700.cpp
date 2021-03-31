#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<int> q;

int main(void)
{
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		q.push(x);
	}
	
	vector<int> multitap;
	fill(multitap.begin(), multitap.end(), 0);
	
	int cnt = 0;
	int count = 0;
	while(!q.empty())
	{
		int t = q.front();
		if(multitap[cnt] == t)
		{
			q.pop();
		}
		else if(multitap[cnt + 1] == t)
		{
			q.pop();
		}
		else
		{
			multitap.push_back(t);
			q.pop();
			count++;
		}
	}
	
	cout << count - n - 1;
	
	return 0;
}
