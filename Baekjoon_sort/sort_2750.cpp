#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	
	vector<int> arr;
	int a = 0, n = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a;
		arr.push_back(a);
	}
	
	sort(arr.begin(), arr.end());
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << endl;
	}
	
	return 0;
}
