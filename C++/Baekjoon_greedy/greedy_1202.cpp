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
		int w = gem[i].second; // ���� 
		int p = gem[i].first; //���� 
		//bag.begin()���� bag.end()���� �� w�̻��� ���� ���ʷ� �����ϴ� ����
		//��ȯ�Ѵ� 
		//upper_bound �� �� ū�� �� �ʰ� ���� ã�´� 
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
