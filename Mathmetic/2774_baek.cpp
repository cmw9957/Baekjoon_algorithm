#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n_cnt[10] = {0};
		int num, cnt = 0;
		cin >> num;
		while(num){
			int idx = num % 10;
			if(!n_cnt[idx]){
				n_cnt[idx] = 1;
				cnt++;
			}
			num /= 10;
		}
		cout << cnt << '\n';
	}
	return 0;
}
