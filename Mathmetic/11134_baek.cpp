#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	
	int n, c;
	
	while(t--){
		cin >> n >> c;
		
		int ans = n / c;
		if(n%c)
			ans++;
		cout << ans << '\n';
	}
	return 0;
}
