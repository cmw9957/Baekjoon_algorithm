#include<bits/stdc++.h>
using namespace std;

int max_num = 0;
int n, k;
vector<int> v;

void func(string s){
	if(s != ""){
		int temp = stoi(s);
		if(temp > n) return;
		max_num = max(max_num, temp);
	}
	
	for(int i = 0;i < k;i++)
		func(s+to_string(v[i]));
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	
	v.assign(k, 0);
	for(int i = 0;i < k;i++)
		cin >> v[i];
	
	func("");
	cout << max_num;
	return 0;
}
