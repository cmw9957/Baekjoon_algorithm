#include<bits/stdc++.h>
using namespace std;

int alpha[26];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	
	while(getline(cin, str)){
		int len = str.length();
		
		for(int i = 0;i < len;i++)
			if(isalpha(str[i]))
				alpha[str[i]-'a']++;
	}
	int max_num = 0;
	for(int i = 0;i < 26;i++)
		max_num = max(max_num, alpha[i]);
	for(int i = 0;i < 26;i++)
		if(alpha[i] >= max_num)
			cout << (char)('a'+i);
	return 0;
}
