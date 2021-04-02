#include <iostream>
#include <vector>
using namespace std;

vector<int> Larr;
vector<int> Parr;
vector<int> Varr;
vector<int> Casearr;

int main(void)
{
    int l, p, v;
    int cnt = 0;

    while(1)
	{
		cin >> l >> p >> v;
		if(l == 0 && p == 0 && v ==0) break;
		else
		{
			Larr.push_back(l);
			Parr.push_back(p);
			Varr.push_back(v);
			cnt++;
		}
	} 
    
    for(int i = 0; i < cnt; i++)
    {
    	int sum = 0;
    	if(Larr[i] == 0 || Parr[i] == 0 || Varr[i] ==0) Casearr.push_back(0);
    	sum += (Varr[i] / Parr[i]) * Larr[i];
    	if(Varr[i] % Parr[i] >= Larr[i])	sum += Larr[i];
    	else	sum += Varr[i] % Parr[i];
    	Casearr.push_back(sum);
	}
	
	for(int i = 0; i < cnt; i++)
	{
		cout << "Case " << i + 1 << ": " << Casearr[i] << endl;
	}
    
    return 0;
}
