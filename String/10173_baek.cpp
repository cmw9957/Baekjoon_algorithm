#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	string ans = "nemo";
	
	while(1){
		bool found = false;
		getline(cin, str);
		if(str == "EOI") break;
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		if(str.find(ans) != string::npos) found = true;
		if(found) cout << "Found" << '\n';
		else	  cout << "Missing" << '\n';
	}
	return 0;
}
