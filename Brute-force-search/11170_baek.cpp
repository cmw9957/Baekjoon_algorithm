#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int cnt = 0;
		for(int i = n;i <= m;i++){
			int num = i;
			while(num){
				if(!(num%10)) cnt++;
				num /= 10;
			}
		}
		if(n == 0) cnt++;
		cout << cnt << '\n';
	}
	return 0;
}
