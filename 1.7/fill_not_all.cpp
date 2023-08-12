#include <bits/stdc++.h>
using namespace std;
int a[10][10];
int main(){
	cin.tie(NULL); cout.tie(NULL);
	fill(&a[0][0], &a[0][0] + 8 * 8, 4);
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}
