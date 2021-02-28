#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cnt = 0;
	while(1){
		cnt++;
		int a, b;
		string oper, ans;
		cin >> a >> oper >> b;
		if(oper == "E") break;
		if(oper == ">"){
			if(a > b) ans = "true";
			else	  ans = "false";
		}
		else if(oper == ">="){
			if(a >= b) ans = "true";
			else	  ans = "false";
		}
		else if(oper == "<"){
			if(a < b) ans = "true";
			else	  ans = "false";
		}
		else if(oper == "<="){
			if(a <= b) ans = "true";
			else	  ans = "false";
		}
		else if(oper == "=="){
			if(a == b) ans = "true";
			else	  ans = "false";
		}
		else{
			if(a != b) ans = "true";
			else	  ans = "false";
		}
		cout << "Case " << cnt << ": " << ans << '\n';
	}
	return 0;
}
