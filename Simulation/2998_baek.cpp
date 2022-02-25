#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string str;
	cin >> str;
	int len = str.length();
	
	if((len % 3) == 1)
		str = "00" + str, len += 2;
	else if((len % 3) == 2)
		str = "0" + str, len += 1;
	
	for(int i = 0;i <= len - 3;i += 3){
		int ans = 0;
		string temp = str.substr(i, 3);
		reverse(temp.begin(), temp.end());
		for(int i = 0;i < 3;i++){
			if(temp[i] == '1') ans += pow(2, i);
		}
		cout << ans;
	}
	return 0;
}
