#include<bits/stdc++.h>
using namespace std;

int chk[201][201];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	
	for(int i = 0;i < m;i++){
		int a, b;
		cin >> a >> b;
		chk[a][b] = 1; chk[b][a] = 1;
	}
	
	int ans = 0;
	for(int i = 1;i <= n-2;i++){
		for(int j = i+1;j <= n-1;j++){
			for(int k = j+1;k <= n;k++){
				if(chk[i][j] || chk[i][k] || chk[j][k]) continue;
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
