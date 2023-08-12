#include <bits/stdc++.h>
using namespace std;
int a[5], temp[5];
int main(){
	for(int i = 0; i < 5; i++)a[i] = i;
	memcpy(temp, a, sizeof(a));
	for(int i : temp) cout << i << ' ';
	cout << '\n';
	// Logic modifying origin a
	a[4] = 1000;
	for(int i : a) cout << i << ' ';
	cout << '\n';
	// Retrieve origin by temp
	memcpy(a, temp, sizeof(temp));
	for(int i : a) cout << i << ' ';
	cout << '\n';
	return 0;
}
