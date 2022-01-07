#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n = 0, x = 0, result = 0;
vector<int> negative;
vector<int> ones;
vector<int> positive;

int compare(int x, int y)
{
	if(x != y) return x > y;
}

int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x < 1)	negative.push_back(x);
		else if(x == 1)	ones.push_back(x);
		else if(x > 1)	positive.push_back(x);
	}
	
	sort(negative.begin(), negative.end());
	sort(positive.begin(), positive.end(), compare);
	
	for(int i = 0; i < negative.size(); i +=2)
	{
		if(i + 1 < negative.size())
		{
			result += (negative[i] * negative[i + 1]);
		}
		if(i + 1 >= negative.size())
		{
			result += negative[i];
		}
	}
	

	for(int i = 0; i < positive.size(); i += 2)
	{
		if(i + 1 < positive.size())
		{
			result += (positive[i] * positive[i + 1]);
		}
		if(i + 1 >= positive.size())
		{
			result += positive[i];
		}
	}
	
	result += ones.size();

	cout << result << endl;
	
	return 0;
}
