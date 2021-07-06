#include<bits/stdc++.h>
using namespace std;

int alpha[26];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	
	while(t--){
		string name;
		cin >> name;
		
		int idx = name.front()-'a';
		alpha[idx]++;
	}
	
	string ans = "";
	for(int i = 0;i < 26;i++){
		if(alpha[i] >= 5)
			ans += 'a'+i;
	}
	sort(ans.begin(), ans.end());
	
	if(ans.empty())
		cout << "PREDAJA";
	else
		cout << ans;
	return 0;
}
