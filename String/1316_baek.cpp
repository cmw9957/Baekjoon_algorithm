#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	string s;
	
	int ans = 0;
	while(t--){
		cin >> s;
		int len = s.length();
		
		int chk[26] = {0};
		for(int i = 0;i < len;i++){
			int idx = s[i]-'a';
			
			if(!chk[idx])
				chk[idx] = 1;
			else if(s[i-1] != s[i])
				break;
			
			if(i == len-1)
				ans++;
		}
	}
	
	cout << ans;
	return 0;
}
