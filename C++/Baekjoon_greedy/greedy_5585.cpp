//�������� �������� ������ �� ���� �ͺ��� ����� ��� ���°���
//�ִ������� �� ���� �� �ִ�. !! 
#include <iostream>
#include <algorithm>
#define MAX 100001

using namespace std;

int main(void)
{
	int n = 0;
	int max = 0;
	int len[MAX];
	
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> len[i];
	}
	
	sort(len, len + n);
	
	for(int i = 0; i < n; i++)
	{
		if(max < len[i] * (n - i))
		{
			max = len[i] * (n - i);
		}
	}
	
	cout << max;
	
	return 0;
}
