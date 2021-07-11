#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long a;
	cin >> a;
	bitset<48> bs(a);
	
	string ans = bs.to_string();
	int len = ans.length();
	
	bool find = false;
	for(int i = 0;i < len;i++){
		if(ans[i] == '1' && !find)
			find = true;
		if(find)
			cout << ans[i];
	}
	
	return 0;
}
