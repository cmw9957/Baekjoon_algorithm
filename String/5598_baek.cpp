#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	for(int i = 0;i < str.length();i++){
		if(str[i] == 'C' || str[i] == 'B' || str[i] == 'A') str[i] = 'Z' - ('C'-str[i]);
		else			 								    str[i] = str[i]-3;
	}
	cout << str;
	return 0;
}
