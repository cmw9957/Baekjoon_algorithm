#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	for(int i = 0;i < str.length();i++){
		if(!(i%10) && i != 0) cout << '\n';
		cout << str[i];
	}
	return 0;
}
