#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string num;
	cin >> num;
	if(num == "0"){
		cout << num;
		return 0;
	}
	int len = num.length();
	
	string ans = "";
	for(int i = 0;i < len;i++)
		ans += bitset<3>(num[i]).to_string();
	
	if(ans[0] == '0' && ans[1] == '0')
		cout << ans.substr(2, ans.length() - 2);
	else if(ans[0] == '0')
		cout << ans.substr(1, ans.length() - 1);
	else
		cout << ans;
	return 0;
}
