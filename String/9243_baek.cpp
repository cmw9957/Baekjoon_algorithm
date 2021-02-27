#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	string a, b;
	cin >> n;
	n %= 2;
	cin >> a >> b;
	bool fail = false;
	if(n){
		for(int i = 0;i < a.length();i++){
			if(a[i] == b[i]){
				fail = true;
				break;
			}
		}
	}
	else
		if(a != b) fail = true;
	if(!fail) cout << "Deletion succeeded";
	else		cout << "Deletion failed";
	return 0;
}
