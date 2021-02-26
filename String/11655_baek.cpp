#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	getline(cin, str);
	for(int i = 0;i < str.length();i++){
		if(isalpha(str[i])){
			if(str[i] >= 'a' && str[i] <= 'z'){
				if(str[i] + 13 > 'z') str[i] = 'a' + str[i] + 13 - 'z' - 1;
				else				  str[i] += 13;
			}
			else if(str[i] >= 'A' && str[i] <= 'Z'){
				if(str[i] + 13 > 'Z') str[i] = 'A' + str[i] + 13 - 'Z' - 1;
				else				  str[i] += 13;
			}
		}
	}
	cout << str;
	return 0;
}
