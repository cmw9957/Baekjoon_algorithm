#include<bits/stdc++.h>
using namespace std;
string s[20005];

bool cmp(string a, string b){
	if(a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> s[i];
	sort(s, s+n, cmp);
	for(int i = 0;i < n;i++){
		if(i != 0 && s[i - 1] == s[i]) continue;
		cout << s[i] << '\n';
	}
	return 0;
}
