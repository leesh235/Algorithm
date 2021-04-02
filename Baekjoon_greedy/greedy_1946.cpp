//이중, 삼중 for문을 사용하게 되면 시간복잡도(시간초과)로 인해 오류 발생
//항상 최악의 상황 생각하기! 

#include <iostream>
#include <algorithm>
#include <vector>
#define T 21
#define N 100001

using namespace std;

int k = 0;
int n = 0;
vector<pair<int, int> >  kase[T];
bool c[N];

int main(void)
{
	cin >> k;
	
	for(int i = 0; i < k; i++)
	{
		cin >>n;
		for(int j = 0; j < n; j++)
		{
			int grade = 0, inter = 0;
			cin >> grade >> inter;
			kase[i].push_back(make_pair(grade, inter));
		}
	}

	for(int i = 0; i < k; i++)
	{
		fill(c, c + n, false);
		sort(kase[i].begin(), kase[i].end());
		int max = kase[i][0].second;
		int count = 1;

		for(int j = 1; j < kase[i].size(); j++)
		{
			if(c[j] != 0 ||(max > kase[i][j].second))
			{
				max = kase[i][j].second;
				c[j] = true;
				count++;
			}
		}
		cout << count << endl;
	}
	
	return 0;
}
