#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(1){
		bool chk = false;
		int alpha[26] = {0};
		string str;
		getline(cin, str);
		if(str == "*") break;
		for(int i = 0;i < str.length();i++){
			alpha[str[i] - 'a']++;
		}
		for(int i = 0;i < 26;i++){
			if(!alpha[i]){
				chk = true;
				break;
			}
		}
		if(chk)
			cout << "N" << '\n';
		else
			cout << "Y" << '\n';
	}
	return 0;
}
