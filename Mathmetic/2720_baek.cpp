#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int cent;
		int quarter, dime, nickel, penny;
		cin >> cent;
		
		quarter = cent / 25;
		cent %= 25;
		dime = cent / 10;
		cent %= 10;
		nickel = cent / 5;
		cent %= 5;
		penny = cent;
		
		cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << '\n';
	}
	return 0;
}
