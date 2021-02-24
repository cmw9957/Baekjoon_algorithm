#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	int num_a, num_b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	num_a = stoi(a); num_b = stoi(b);
	if(a > b) cout << a;
	else	  cout << b;
	return 0;
}
