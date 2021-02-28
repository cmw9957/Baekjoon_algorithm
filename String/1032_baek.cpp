#include<bits/stdc++.h>
using namespace std;
string str[55];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string ans = "";
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		str[i] = s;
	}
	
	int len = str[0].length();
	for(int i = 0;i < len;i++){
		for(int j = 0;j < n;j++){
			if(j == 0){
				ans += str[j][i];
				continue;
			}
			if(ans[i] != str[j][i]){
				ans.pop_back();
				ans += "?";
			}
		}
	}
	for(int i = ans.length();i < len;i++)
		ans += "?";
	cout << ans;
	return 0;
}
