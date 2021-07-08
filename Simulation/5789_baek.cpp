#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	string str;
	while(t--){
		cin >> str;
		int len = str.length();
		len /= 2;
		
		if(str[len-1] == str[len])
			cout << "Do-it" << '\n';
		else
			cout << "Do-it-Not" << '\n';
	}
	return 0;
}
