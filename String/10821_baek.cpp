#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int cnt = 1;
	for(int i = 0;i < str.length();i++)
		if(!isdigit(str[i])) cnt++;
	cout << cnt;
	return 0;
}
