#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--){
		int n, m;
		cin >> n >> m;
		int cnt = 0;
		for(int i = 1;i < n - 1;i++){
			for(int j = i + 1;j < n;j++){
				int temp = pow(i, 2) + pow(j, 2) + m;
				if(temp % (i * j) == 0) cnt++;
			}
		}
		cout << cnt << '\n';
	}
	
	return 0;
}
