#include<bits/stdc++.h>
using namespace std;  
int n, a[1004], cnt;
int go(int l, int r){ 
	++cnt;
	if(l == r) return a[l];  
	int mid = (l + r) / 2; 
	int sum = go(l, mid) + go(mid + 1, r); 
	return sum;
}https://www.inflearn.com/course/10%EC%A3%BC%EC%99%84%EC%84%B1-%EC%BD%94%EB%94%A9%ED%85%8C%EC%8A%A4%ED%8A%B8-%ED%81%B0%EB%8F%8C/unit/100294
int main(){
	cin >> n; 
	for(int i = 1; i <= n; i++){
		a[i - 1] = i; 
	}
	int sum = go(0, n - 1);
	cout << sum << '\n';
	cout << "cnt: " << cnt << '\n';
}
 