#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str, limit_str = "CAMBRIDGE", ans = "";
	cin >> str;
	for(int i = 0;i < str.length();i++){
		if(limit_str.find(str[i], 0) == string::npos)
			ans += str[i];
	}
	cout << ans;
	return 0;
}
