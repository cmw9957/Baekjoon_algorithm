#include<bits/stdc++.h>
using namespace std;

int func(char c){
	char chk[5] = {'a', 'e', 'i', 'o', 'u'};
	for(int i = 0;i < 5;i++)
		if(c == chk[i])
			return 1;
	return 0;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	
	getline(cin, str);
	
	int len = str.length();
	string ans = "";
	for(int i = 0;i < len;i++){
		ans += str[i];
		if(func(str[i]))
			i+=2;
	}
	
	cout << ans;
	return 0;
}
