#include <bits/stdc++.h>
using namespace std;
int fact_rec(int n){
	if(n == 1 || n == 0) return 1;
	return n * fact_rec(n - 1);
}
int fact_for(int n){
	int ret = 1;
	for (int i = 1; i <= n; i++){
		ret *= i;
	}
	return ret;
}
int n = 5;
int main(){
	cout << fact_for(n) << '\n';
	cout << fact_rec(n) << '\n';
	return 0;
}
