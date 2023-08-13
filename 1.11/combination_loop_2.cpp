#include <bits/stdc++.h>
using namespace std;
int n = 5;
int k = 2;
int a[5] = {1, 2, 3, 4, 5};
int main(){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			cout << i << " " << j << '\n';
		}
	}
	return 0;
}
