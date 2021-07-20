#include<bits/stdc++.h>
using namespace std;

int n, k;

unordered_set<string> s;
vector<int> v;
vector<int> vis;

void func(string num, int cnt){
	if(cnt != k){
		for(int i = 0;i < n;i++){
			if(!vis[i]){
				vis[i] = 1;
				func(num+to_string(v[i]), cnt+1);
				vis[i] = 0;
			}
		}
	}
	else
		s.insert(num);
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	
	v.assign(n, 0);
	vis.assign(n, 0);
	
	for(int i = 0;i < n;i++)
		cin >> v[i];
	
	func("", 0);
	cout << s.size();
	return 0;
}
