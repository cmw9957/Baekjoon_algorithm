#include<bits/stdc++.h>
using namespace std;

long long num[70];

long long pivo(int n){
	if(n < 2)
		return 1;
	else if(n == 2)
		return 2;
	else if(n == 3)
		return 4;
	for(int i = 4;i <= n;i++)
		num[i] = num[i-1] + num[i-2] + num[i-3] + num[i-4];
	return num[n];
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	num[0] = 1; num[1] = 1; num[2] = 2; num[3] = 4;
	while(t--){
		int n;
		cin >> n;
		
		cout << pivo(n) << '\n';
	}
	return 0;
}
