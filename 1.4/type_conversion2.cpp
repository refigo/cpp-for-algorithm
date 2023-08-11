// good
#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a = {1, 2, 3};
	cout << (int)a.size() - 10 << '\n'; // -7
	return 0;
}

// bad
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a = {1, 2, 3};
	cout << a.size() - 10 << '\n'; // 18446744073709551609
	return 0;
}
*/
