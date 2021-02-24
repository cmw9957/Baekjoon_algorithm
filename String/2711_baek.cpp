#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, idx;
	string str;
	cin >> t;
	while(t--){
		cin >> idx >> str;
		for(int i = 0;i < str.length();i++){
			if(i == idx-1) continue;
			cout << str[i];
		}
		cout << '\n';
	}
	return 0;
}
