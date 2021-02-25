#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	string buffer;
	cin >> t;
	getline(cin, buffer);
	while(t--){
		string str;
		getline(cin, str);
		str[0] = toupper(str[0]);
		cout << str << '\n';
	}
	return 0;
}
