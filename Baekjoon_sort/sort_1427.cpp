#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
	return a > b;
}

int main(void){
	
	string s = "";
	cin >> s;
	int a[s.length()] = {0, };
	
	for(int i = 0; i < s.length(); i++){
		a[i] = (int)s[i] - 48;
	}

	sort(a, a + s.length(), compare);
	
	for(int i = 0; i < s.length(); i++){
		cout << a[i];
	}
	
	return 0;
}
