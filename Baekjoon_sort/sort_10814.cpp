#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#define MAX 100001
using namespace std;

vector<pair<pair<int, string>, int> > arr;

bool compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b){
	if(a.first.first == b.first.first){
		return a.second < b.second;
	}
	else return a.first.first < b.first.first;
}

int main(void){
	
	int n = 0, x = 0;
	string y = " ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		arr.push_back({{x, y}, i});
	}
	
	sort(arr.begin(), arr.end(), compare);
	
	for(int i = 0; i < n; i++){
		cout << arr[i].first.first << " " << arr[i].first.second << "\n";
	}
	
	return 0;
}
