#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		vector<int> v;
		for(int i = 0;i < 10;i++){
			int num;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end(), cmp);
		cout << v[2] << '\n';
	}
	return 0;
}
