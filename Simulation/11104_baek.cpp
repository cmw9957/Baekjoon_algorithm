#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	while(n--){
		int ans = 0;
		string bit;
		cin >> bit;
		reverse(bit.begin(), bit.end());
		for(int i = 0;i < bit.length();i++)
			if(bit[i] == '1') ans += pow(2, i);
		
		cout << ans << '\n';
	}
	
	return 0;
}
