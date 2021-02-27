#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	while(getline(cin, str)){
		int low_ch = 0, up_ch = 0, digit = 0, space = 0, len;
		len = str.length();
		for(int i = 0;i < len;i++){
			if(str[i] >= 'a' && str[i] <= 'z') low_ch++;
			else if(str[i] >= 'A' && str[i] <= 'Z') up_ch++;
			else if(str[i] == ' ') space++;
			else if(isdigit(str[i])) digit++;
		}
		cout << low_ch << ' ' << up_ch << ' ' << digit << ' ' << space << '\n';
	}
	return 0;
}
