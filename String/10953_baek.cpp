#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		cout << str[0] - '0' + str[2] - '0' << '\n';
	}
	return 0;
}
