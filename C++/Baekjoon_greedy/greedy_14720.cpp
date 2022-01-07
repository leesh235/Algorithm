#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n = 0, cnt = 0;
	vector<int> arr;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	
	int milk = 0;
	for(int i = 0; i < n; i++){
		if(milk == arr[i]){
			cnt++;
			if(milk == 2){
				milk = 0;
			}else{
				milk++;
			}
		}
	}
	
	cout << cnt;
	
	return 0;
}
