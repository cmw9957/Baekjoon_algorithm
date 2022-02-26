#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, b;
	cin >> n >> b;
	
	string ans = "";
	for(int i = 0;n != 0;i++){
		int temp = n % b;
		n /= b;
		
		if(temp >= 10)
			ans += temp + 55;
		else
			ans += temp + '0';
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}
