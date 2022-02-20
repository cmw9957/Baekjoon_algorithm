#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	cin.ignore();
	
	while(n--){
		string str;
		getline(cin, str);
		int cnt = 0;
		
		int len = str.length();
		int idx = 0;
		for(int i = 0;i < len + 1;i++){
			if(str[i] == ' ') cnt++;
			if(cnt == 2){
				idx = i;
				break;
			}
		}
		string f_str = str.substr(0, idx + 1);
		string l_str = str.substr(idx + 1, len - idx + 1);
		
		cout << l_str << ' ' << f_str << '\n';
	}
	
	return 0;
}
