#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	int remain;
	while(b){
		remain = a%b;
		a = b;
		b = remain;
	}
	return a;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int g = gcd(a, b);
	cout << g << '\n' << a * b / g;
	return 0;
}
