#include <iostream>
#include <vector>
using namespace std;

vector<int> num;
vector<char> sign;

int main(void)
{	
	fill(num.begin(), num.end(), 0);
	fill(sign.begin(), sign.end(), NULL);
	int cnt = 0;
	while(1)
	{
		int x;
		char a;
		if(cnt == 0)	sign.push_back('+');
		else if(cnt % 2 == 1)
		{
			cin >> x;
			num.push_back(x);
		}	
		else if(cnt % 2 == 0)
		{
			a = cin.get();
			if(a == '\n') break;
			else sign.push_back(a); 
		}
		cnt++;
	}
	
	int positive = 0;
	int negative = 0;
	
	for(int i = 0; i < (cnt / 2); i++)
	{
		if(sign[i] == '+')
		{
			positive += num[i];
		}
		else if(sign[i] == '-')
		{
			while(1)
			{
				negative += num[i];
				i++;
				if(sign[i] == '-' || i == (cnt / 2)) break;
			}
			i--;
		}
	}
	
	cout << positive - negative;
	
	return 0;
}
