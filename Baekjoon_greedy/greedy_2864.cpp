#include <iostream>
#include <algorithm> // replace
#include <string>    // stoi

using namespace std;

int main(void)
{
	string a = "";
	string b = "";
	
	cin >> a >> b;
	
	replace(a.begin(), a.end(), '6', '5');
	replace(b.begin(), b.end(), '6', '5');

	cout << stoi(a) + stoi(b) << " ";

	replace(a.begin(), a.end(), '5', '6');
	replace(b.begin(), b.end(), '5', '6');
	
	cout << stoi(a) + stoi(b);
	
	return 0;
}
