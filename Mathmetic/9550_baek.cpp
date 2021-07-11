#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	
	while(t--){
		int ans = 0;
		int n, k;
		cin >> n >> k;
		
		for(int i = 0;i < n;i++){
			int num;
			cin >> num;
			
			ans += num / k;
		}
		cout << ans << '\n';
	}
	return 0;
}
