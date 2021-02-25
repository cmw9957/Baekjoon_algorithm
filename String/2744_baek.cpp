#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	for(int i = 0;i < str.length();i++){
		if(str[i] >= 'a') str[i] = toupper(str[i]);
		else			  str[i] = tolower(str[i]);
	}
	cout << str;
	return 0;
}
