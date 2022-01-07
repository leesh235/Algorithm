#include <iostream>
using namespace std;

int main(void) {
	int n = 0, a = 0;
	int check[10001] = {0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		check[a]++;
	}

	for (int i = 1; i < 10001; i++) {
		if (check[i] != 0) {
			for (int j = 0; j < check[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}

	return 0;
}
