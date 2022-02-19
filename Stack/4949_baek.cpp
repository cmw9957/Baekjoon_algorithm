#include<bits/stdc++.h>
using namespace std;

//�ð����⵵ O(n^2)
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(1){
		stack<char> S;
		bool isValid = true;
		string s;
		getline(cin, s);
		if(s == ".") break;
		for(auto c : s){
			if(c == '(' || c == '[') S.push(c);
			else if(c == ')'){
				if(S.empty() || S.top() != '('){
					isValid = false;
					break;
				}
				S.pop();
			}
			else if(c == ']'){
				if(S.empty() || S.top() != '['){
					isValid = false;
					break;
				}
				S.pop();
			}
		}
		if(!S.empty()) isValid = false;
			if(isValid)
				cout << "yes" << '\n';
			else
				cout << "no" << '\n';
	}
	return 0;
}
