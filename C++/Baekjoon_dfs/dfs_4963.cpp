#include <iostream>
#include <vector>

using namespace std;

int w, h;
bool check[51][51] = {false};
int arr[51][51];
int _y[8] = {0, 0, -1, 1, -1, 1, -1, 1};
int _x[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

//dfs를 실행, 자신을 중심으로 상하좌우, 각 대각선에 대한 dfs실행 
void dfs(int y, int x){
	if(check[y][x]) return;
	check[y][x] = true;
	
	for(int i = 0; i < 8; i++){
		int yy = y + _y[i];
		int xx = x + _x[i];
		if(xx > 0 && yy > 0 && xx <= w && yy <= h){
			if(arr[yy][xx] == 1 && check[yy][xx] == false){
				dfs(yy, xx);
			}
		}
	}
}
 
int main(void)
{ 
	vector<int> count;
	while(true)
	{
		int cnt = 0;
		cin >> w >> h;
		//반복문 탈출 부분 
		if(w == 0 && h == 0) break;
		else{
			//입력부분 
			for(int i = 1; i <= h; i++){
				for(int j = 1; j <= w; j++){
					cin >> arr[i][j];
				}
			}
			
			//dfs 실행부분 
			for(int i = 1; i <= h; i++){
				for(int j = 1; j <= w; j++){
					if(check[i][j] == false && arr[i][j] == 1){
						dfs(i, j);
						cnt++;
					}
				}
			}
			
			//arr과 check를 초기화하여 다음 입력값에 영향이 없도록함 
			for(int i = 1; i <= h; i++){
				for(int j = 1; j <= w; j++){
					arr[i][j] = 0;
					check[i][j] = false;
				}
			}
			
			//출력값 저장 
			count.push_back(cnt);
		}
	}
	
	//출력 
	for(int i = 0; i < count.size(); i++){
		cout << count[i] << endl;
	}
   
   return 0; 
}
