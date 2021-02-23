#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = 1;
	for(int i = n;i > 0;i--) ans *= i;
	cout << ans;
	return 0;
}
