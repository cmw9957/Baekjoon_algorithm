#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int score = 0;
		string str;
		cin >> str;
		score += (str[0]-'A') * pow(26, 2) + (str[1]-'A') * pow(26, 1) + (str[2]-'A');
		score -= (str[4] - '0') * 1000 + (str[5] - '0') * 100 + (str[6] - '0') * 10 + (str[7] - '0');
		if(abs(score) <= 100) cout << "nice";
		else				  cout << "not nice";
		cout << '\n';
	}
	return 0;
}
