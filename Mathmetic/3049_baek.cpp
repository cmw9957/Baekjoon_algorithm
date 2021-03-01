#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = n*(n-1)*(n-2)*(n-3)/24;
	cout << ans;
	return 0;
}
