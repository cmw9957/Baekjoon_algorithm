#include<bits/stdc++.h>
using namespace std;

int ans[1005];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0;i < m;i++){
		int a, b;
		cin >> a >> b;
		ans[a]++; ans[b]++;
		
	}
	for(int i = 1;i <= n;i++)
		cout << ans[i] << '\n';
	return 0;
}
