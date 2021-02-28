#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		string str;
		cin >> str;
		for(int i = 0;i < str.length();i++){
			char ans;
			ans = (a*(str[i]-'A')+b)%26;
			ans += 'A';
			cout << ans;
		}
		cout << '\n';
	}
	return 0;
}
