//����, ���� for���� ����ϰ� �Ǹ� �ð����⵵(�ð��ʰ�)�� ���� ���� �߻�
//�׻� �־��� ��Ȳ �����ϱ�! 

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
