#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int total = 0;
		int check_alpha[26] = {0};
		string str;
		cin >> str;
		for(int i = 0;i < str.length();i++)
			check_alpha[str[i] - 'A']++;
		for(int i = 0;i < 26;i++)
			if(!check_alpha[i])
				total += i + 'A';
		cout << total << '\n';
	}
	return 0;
}
