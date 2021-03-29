#include<iostream>
using namespace std;

int main(void){
    //input,한수의 개수 
    int n = 0, cnt = 0;;
    
    cin >> n;
    
    if(n < 100 && n >= 1){
    	cnt = n;
	}
	else if(n >= 100 && n <= 1000){
		cnt = 99;
		for(int i = 100; i <= n; i++){
			int aZero = i / 100;
			int aOne = (i % 100) / 10;
			int aTwo = i % 10;
			if((aTwo - aOne) == (aOne - aZero)){
				cnt++;
			}
		}
	}
	
	cout << cnt;
    
    return 0;
}
