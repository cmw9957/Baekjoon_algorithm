#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cnt, int_num;
	string num, ans = "";
	cin >> num >> cnt;
	int_num = stoi(num);
	for(int i = 0;i < int_num;i++){
		ans += num;
		if(ans.length() >= cnt) break;
	}
	if(ans.length() >= cnt){
		for(int i = 0;i < cnt;i++) cout << ans[i];
	}
	else
		cout << ans;
	return 0;
}
