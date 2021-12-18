#include<iostream>

using namespace std;

int main()
{
	unsigned long s = 0;
	int n = 0;
	unsigned long sum = 0;
	unsigned long num = 1;

	cin >> s;
	
	while(1){
		sum += num;
		n++;
		num++;
		if(sum > s){
			n--;
			break;
		}
	}
	
	cout << n;
	
	return 0;
}
