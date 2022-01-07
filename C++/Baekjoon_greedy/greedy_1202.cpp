#include <iostream>
#include <set>
#include <vector>
#include<algorithm>
using namespace std;

typedef pair<int, int> pi;
multiset<int> bag;

int main(void)
{
	int n , k;
	cin >> n >> k;
	vector<pi> gem(n);
	for(int i = 0; i < n; i++)
	{
		cin >> gem[i].second >> gem[i].first;
	}
	
	sort(gem.begin(), gem.end());
	
	for(int i = 0; i < k; i++)
	{
		int b;
		cin >> b;
		bag.insert(b);
	}
	
	multiset<int>::iterator it;
	int sum = 0;
	for(int i = n - 1; i >= 0; i--)
	{
		int w = gem[i].second; // 무게 
		int p = gem[i].first; //가격 
		//bag.begin()에서 bag.end()까지 중 w이상인 수가 최초로 등장하는 값를
		//반환한다 
		//upper_bound 는 더 큰값 즉 초과 값을 찾는다 
		it = bag.lower_bound(w);
		if(*it)
		{
			sum += p;
			bag.erase(it);
		}
	}
	
	cout<<sum;
	
	return 0;
}
