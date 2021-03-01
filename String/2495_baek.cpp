#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int t = 0;t < 3;t++){
		string str;
		cin >> str;
		int cnt = 1, max_cnt = 0;
		int len = str.length();
		for(int i = 0;i < len ;i++){
			if(str[i] == str[i+1]) cnt++;
			else{
				max_cnt = max(max_cnt, cnt);
				cnt = 1;
			}
		}
		cout << max_cnt << '\n';
	}
	return 0;
}
