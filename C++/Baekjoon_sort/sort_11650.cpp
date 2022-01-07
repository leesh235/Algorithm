#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
	if(a.first == b.first){
		return a.second < b.second;
	}
	else{
		return a.first < b.first;
	}
}

int main(void){
	
	int n = 0, x = 0, y = 0;
	vector<pair<int, int> > arr;
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		arr.push_back(make_pair(x, y));
	}
	
	sort(arr.begin(), arr.end(), compare);
	
	for(int i = 0; i < n; i++){
		cout << arr[i].first << arr[i].second << endl;
	}
	
	return 0;
}
