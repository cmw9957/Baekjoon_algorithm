#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v;
	for(int i = 1;i <= 20;i++)
		v.push_back(i);
	for(int i = 0;i < 10;i++){
		int start, end;
		cin >> start >> end;
		auto it = v.begin() + start - 1;
		auto it2 = v.begin() + end;
		reverse(it, it2);
	}
	for(auto c : v) cout << c << ' ';
}
