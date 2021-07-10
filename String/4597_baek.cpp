#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1){
		string str;
		cin >> str;
		
		if(str == "#")
			break;
		
		int cnt = 0;
		int len = str.length();
		
		for(int i = 0;i < len;i++){
			if(str[i] == '1')
				cnt++;
		}
		
		if(str[len-1] == 'e' && !(cnt % 2))
			str[len-1] = '0';
		else if(str[len-1] == 'e' && cnt % 2)
			str[len-1] = '1';
		else if(str[len-1] == 'o' && !(cnt % 2))
			str[len-1] = '1';
		else if(str[len-1] == 'o' && cnt % 2)
			str[len-1] = '0';
		
		cout << str << '\n';
		
	}
	return 0;
}
