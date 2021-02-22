#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int price;
		cin >> price;
		int n;
		cin >> n;
		while(n--){
			int q, p;
			cin >> q >> p;
			p *= q;
			price += p;
		}
		cout << price << '\n';
	}
	return 0;
}
