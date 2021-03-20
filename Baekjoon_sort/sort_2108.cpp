#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void){
	
	//n은 홀수 
	int n = 0, a = 0;
	double sum = 0;
	scanf("%d", &n);
	
	int count[8001] = {0, };
	vector<int> arr;
	
	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		sum += a;
		arr.push_back(a);
		count[a + 4000]++;
	}
	
	//산술평균 소수점이하 첫째 자리까지
	double arithmetic = 0;
		arithmetic = floor(sum / n + 0.5);

	
	//중앙값
	sort(arr.begin(), arr.end());
	int median = arr[n / 2];
	
	//두번째 최빈값
	//최빈값이 하나라면 하나를 출력
	//최빈값이 두개 이상이라면 두번째 최빈값 출력 
	int maxCnt = 0, maxIndex;		
	bool check = true;
	for(int i = 0; i < 8001; i++){
		if(count[i] != 0){
			if(count[i] > maxCnt){
				maxCnt = count[i];
				maxIndex = i - 4000;
				check = true;
			}
			else if(count[i] == maxCnt && check){
				maxIndex = i - 4000;
				check = false;
			}
		}
	}
	
	
	//범위
	int range = arr[n - 1] - arr[0];
	
	printf("%0.0f\n", arithmetic);
	printf("%d\n", median);
	printf("%d\n", maxIndex);
	printf("%d\n", range);
	
	return 0;
}
