#include <iostream>
#include <vector>
using namespace std;

int main(void){
	
	int n = 0, a = 0;
	vector<int> arr;
	
	//input array
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		arr.push_back(a);
	}
	
	//made heap
	for(int i = 1; i < arr.size(); i++){
		int c = i;
		do{
			int root = (c - 1) / 2;
			if(arr[root] < arr[c]){
				int temp = arr[c];
				arr[c] = arr[root];
				arr[root] = temp;
			}
			c = root;
		}while(c != 0);
	}
	
	//sort
	for(int i = arr.size() - 1; i >= 0; i--){
		int temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		int root = 0, c = 1;
		
		do{
			c = 2 * root + 1;
			if(arr[c] < arr[c + 1] && c < i - 1){
				c++;
			}
			if(arr[c] > arr[root] && c < i){
				int temp = arr[root];
				arr[root] = arr[c];
				arr[c] = temp;
			}
			root = c;
		}while(c < i);
	}
	
	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << '\n';
	}
	
	return 0;
}
