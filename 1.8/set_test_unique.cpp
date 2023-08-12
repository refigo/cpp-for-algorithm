#include <bits/stdc++.h>
using namespace std;

void using_unique_erase(){
	vector<int> v;
	int n = 1e5;
	for(int i = 1; i < 5; i++){
		v.push_back(i);
		v.push_back(n - i);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
}

void using_set(){
	vector<int> v;
	int n = 1e5;
	for(int i = 1; i < 5; i++){
		v.push_back(i);
		v.push_back(n - i);
	}
	set<int> st;
	for(int i : v){
		st.insert(i);
	}
	vector<int> nv;
	for(int i : st){
		nv.push_back(i);
	}
}

void test_latency(size_t iteration){
	PROFILE_START("using_unique_erase");
	using_unique_erase();
	PROFILE_STOP("using_unique_erase");
	PROFILE_START("using_set");
	using_set();
	PROFILE_STOP("using_set");
}

int main(){
	const size_t warmups = 1000;
	const size_t tests = 100;

	PROFILE_RUN_ALL(warmups, tests, 
		test_latency(__loop)
	);

	return 0;
}
