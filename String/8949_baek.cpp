#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string first, second;
	string ans = "";
	
	cin >> first >> second;
	
	int f_len = first.length();
	int s_len = second.length();
	
	f_len--; s_len--;
	
	while(1){
		string temp = "";
		
		if(f_len >= 0 && s_len >= 0){
			temp = to_string(first[f_len] + second[s_len]-96);
			ans = temp + ans;
		}
		else if(f_len < 0 && s_len >= 0)
			ans = second[s_len] + ans;
		else if(f_len >= 0 && s_len < 0)
			ans = first[f_len] + ans;
		else
			break;
		f_len--; s_len--;
	}
	cout << ans;
	return 0;
}
