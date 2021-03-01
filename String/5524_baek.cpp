#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while(n--){
		string str;
		cin >> str;
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		cout << str << '\n';
	}
	return 0;
}
