#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
	for(int i = 2; i <= 5; i++)v.push_back(i);
	v.push_back(7);

	cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
	cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << "\n";

	cout << lower_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
	cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << "\n";

	cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
	cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
	return 0;
}
