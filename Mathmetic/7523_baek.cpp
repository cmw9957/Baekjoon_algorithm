#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	for(int i = 1;i <= t;i++){
		long long n, m;
		cin >> n >> m;
		
		long long ans = (abs(n - m) + 1) * (n + m) / 2;
		cout << "Scenario #" << i << ":\n" << ans << "\n\n";
	}
	return 0;
}
