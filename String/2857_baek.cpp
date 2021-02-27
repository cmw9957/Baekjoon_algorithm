#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	int cnt = 0;
	bool is_fbi = false;
	while(cin >> str){
		cnt++;
		if(str.find("FBI") <= str.length()){
			cout << cnt << ' ';
			is_fbi = true;
		}
	}
	if(!is_fbi) cout << "HE GOT AWAY!" << '\n';
	return 0;
}
