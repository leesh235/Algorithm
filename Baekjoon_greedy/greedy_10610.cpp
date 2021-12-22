#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> n;
	int sum = 0;
	string s = "";
	
	cin >> s;
	
	for(int i = 0; i < s.size(); i++){
		sum += (int)s[i] - 48;
		n.push_back((int)s[i] - 48);
	}
	
	sort(n.begin(), n.end());
	
	if(n[0] != 0 || sum % 3 != 0){
		cout << -1 << endl;
	}else{
		for(int i = n.size() - 1; i >= 0; i--){
			cout << n[i];
		}
	}
	
	return 0;
}
