#include <iostream>
using namespace std;

int main(void){
	
	int n = 0;
	scanf("%d", &n);
	
	int arr[n] = {0, };
	
	//input array 
	for(int i = 0; i < n; i++{
		scanf("%d", &arr[i]);
	}
	
	//made heap
	for(int i = 1; i < n; i++{
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
	
	return 0;
}
