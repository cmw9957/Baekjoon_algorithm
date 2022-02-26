#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	int ans = 0;
	while(n--){
		string str;
		cin >> str;
		int len = str.length();
		stack<char> s;
		
		for(int i = 0;i < len;i++){
			if(!s.empty()){
				if(s.top() == str[i]) s.pop();
				else				  s.push(str[i]);
			} else {
				s.push(str[i]);
			}
		}
		if(s.empty()) ans++;
	}
	cout << ans;
	return 0;
}
