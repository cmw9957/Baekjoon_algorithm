#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string num;
	cin >> num;
	int len = num.length();
	
	if(len % 3 == 1)
		num = "00" + num, len += 2;
	else if(len % 3 == 2)
		num = "0" + num, len += 1;
	
	for(int i = 0;i <= len - 3;i += 3){
		int ans = 0;
		string temp = num.substr(i, 3);
		
		for(int j = 0;j < 3;j++){
			if(temp[j] == '1') ans += pow(2, 2 - j);
		}
		cout << ans;
	}
	return 0;
}
