#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int candy, bro;
		cin >> candy >> bro;
		cout << "You get "<< candy/bro << " piece(s) and your dad gets "
			 << candy%bro <<" piece(s)." << '\n';
	}
	return 0;
}
