#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string n;
	int b;
	cin >> n >> b;
	
	reverse(n.begin(), n.end());
	
	int ans = 0;
	for(int i = 0;i < n.length();i++){
		if(isdigit(n[i]))
			ans += (n[i] - '0') * pow(b, i);
		else
			ans += (n[i] - 55) * pow(b, i);
	}
	cout << ans;
	return 0;
}
