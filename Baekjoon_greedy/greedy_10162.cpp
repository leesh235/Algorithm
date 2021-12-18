#include<iostream>

using namespace std;

int main()
{
	int A = 300;
	int B = 60;
	int C = 10;
	
	int a = 0;
	int b = 0;
	int c = 0;
	int n = 0;
	
	int t = 0;
	
	cin >> t;
	
	if(t >= A){
		a = t / A;
		b = (t % A) / B;
		c = ((t % A) % B) / C;
		if(((t % A) % B) % C == 0){
			cout << a << ' ' << b << ' ' << c;
		}else{
			cout << -1;
		}
	}else if(A > t && t >= B){
		b = (t / B);
		c = (t % B) / C;
		if((t % B) % C == 0){
			cout << a << ' ' << b << ' ' << c;
		}else{
			cout << -1;
		}
	}else{
		c = (t / C);
		if(t % C == 0){
			cout << a << ' ' << b << ' ' << c;
		}else{
			cout << -1;
		}
	}
	
	return 0;
}
