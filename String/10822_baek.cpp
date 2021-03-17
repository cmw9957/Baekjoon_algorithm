#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	string temp = "";
	cin >> s;
	int ans = 0;
	for(int i = 0;i < s.size();i++){
		if(s[i] == ','){
			ans += stoi(temp);
			temp = "";
		}
		else
			temp += s[i];
	}
	cout << ans + stoi(temp);
	return 0;
}
