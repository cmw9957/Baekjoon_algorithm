#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	stack<char> S;
	int n;
	cin >> n;
	while(n--){
		string str;
		cin >> str;
		bool filter = false;
		for(int i = 0;i < str.length();i++){
			if(str[i] == '(')
				S.push(str[i]);
			else{
				if(S.empty() || S.top() != '('){
					filter = true;
					break;
				}
				else
					S.pop();
			}
		}
		if(filter || !S.empty())
			cout << "NO" <<'\n';
		else
			cout << "YES" << '\n';

		while(!S.empty())
			S.pop();
	}
	return 0;
}
