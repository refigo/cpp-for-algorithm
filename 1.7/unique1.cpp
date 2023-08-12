#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
	for(int i = 1; i <= 5; i++){
		v.push_back(i);
		v.push_back(i);
	}
	for(int i : v) cout << i << " ";
	cout << '\n';
	// Fill with non-overlapping elements, then return the next iterator.
	auto it = unique(v.begin(), v.end());
	cout << it - v.begin() << '\n';
	// Fill it up so that it doesn't overlap from the beginning, and leave the rest of the elements as they are.
	for(int i : v) cout << i << " ";
	cout << '\n';
	return 0;
}
