#include <bits/stdc++.h>
using namespace std;
int main(){
	if (is_trivial<vector<int>>())
		cout<< "Hello refigo!\n";

	vector<int> v {1, 2, 3};
	vector<int> ret(3);
	memcpy( &ret, &v, 3*sizeof(int) );
	
	cout << ret[1] << "\n";
	ret[1] = 100;
	cout << ret[1] << "\n";
	cout << v[1] << "\n";
	return 0;
}
