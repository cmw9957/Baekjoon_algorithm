#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string buffer;
	getline(cin, buffer);
	for(int i = 1;i <= n;i++){
		string str;
		getline(cin, str);
		cout << i << ". " << str << '\n';
	}
	return 0;
}
