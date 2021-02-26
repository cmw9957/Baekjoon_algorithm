#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		cout << str.front() << str.back() << '\n';
	}
	
	return 0;
}
