#include<bits/stdc++.h>
using namespace std;

int func(int i, int j, int l, int k){
	if(i/10 == k || j/10 == k || l/10 == k || 
	   i%10 == k || j%10 == k || l%10 == k)
		return 1;
	return 0;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	
	int ans = 0;
	int temp;
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= 59;j++){
			for(int l = 0;l <= 59;l++){
				ans += func(i, j, l, k);
			}
		}
	}
	
	cout << ans;
	return 0;
}
