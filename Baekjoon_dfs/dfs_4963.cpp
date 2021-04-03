#include <iostream>
#include <vector>

using namespace std;

int w, h;
bool check[51][51] = {false};
int arr[51][51];
int _y[8] = {0, 0, -1, 1, -1, 1, -1, 1};
int _x[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

//dfs�� ����, �ڽ��� �߽����� �����¿�, �� �밢���� ���� dfs���� 
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
		//�ݺ��� Ż�� �κ� 
		if(w == 0 && h == 0) break;
		else{
			//�Էºκ� 
			for(int i = 1; i <= h; i++){
				for(int j = 1; j <= w; j++){
					cin >> arr[i][j];
				}
			}
			
			//dfs ����κ� 
			for(int i = 1; i <= h; i++){
				for(int j = 1; j <= w; j++){
					if(check[i][j] == false && arr[i][j] == 1){
						dfs(i, j);
						cnt++;
					}
				}
			}
			
			//arr�� check�� �ʱ�ȭ�Ͽ� ���� �Է°��� ������ �������� 
			for(int i = 1; i <= h; i++){
				for(int j = 1; j <= w; j++){
					arr[i][j] = 0;
					check[i][j] = false;
				}
			}
			
			//��°� ���� 
			count.push_back(cnt);
		}
	}
	
	//��� 
	for(int i = 0; i < count.size(); i++){
		cout << count[i] << endl;
	}
   
   return 0; 
}
