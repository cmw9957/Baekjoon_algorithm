#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
	int temp;
	while(b != 0){
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	
	while(t--){
		long long a, b;
		cin >> a >> b;
		
		cout << a*b/gcd(a, b) << '\n';
	}
	return 0;
}
