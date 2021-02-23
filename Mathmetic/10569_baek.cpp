#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int dot, line;
		cin >> dot >> line;
		int num = abs(dot-line);
		cout << num + 2 << '\n';
	}
	return 0;
}
