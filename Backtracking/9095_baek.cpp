#include<bits/stdc++.h>
using namespace std;
int cnt;
int n;
void func(int sum){
	if(sum > n) return ;
	if(sum == n){
		cnt++;
		return ;
	}
	func(sum+1);
	func(sum+2);
	func(sum+3);
}
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		func(0);
		cout << cnt << '\n';
		cnt = 0;
	}
	return 0;
}
