#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	int remain;
	while(b){
		remain = a % b;
		a = b;
		b = remain;
	}
	return a;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a, b, gcd_num;
		cin >> a >> b;
		gcd_num = gcd(a, b);
		cout << a * b / gcd_num << ' ' << gcd_num << '\n';
	}
	return 0;
}
