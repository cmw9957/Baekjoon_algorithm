#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	set<string> m;
	while(n--){
		string name, op;
		cin >> name >> op;
		
		if(op == "enter")
			m.insert(name);
		else
			m.erase(name);
	}
	
	for(auto it = m.rbegin();it != m.rend();it++)
		cout << *it << '\n';
	return 0;
}
