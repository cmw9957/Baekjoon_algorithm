#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cnt[26] = {0};
	string str;
	cin >> str;
	int len = str.length();
	for(int i = 0;i < len;i++){
		char u = toupper(str[i]);
		int idx = u - 'A';
		cnt[idx]++;
	}
	int max_cnt = 0;
	char max_alpha;
	for(int i = 0;i < 26;i++){
		if(max_cnt < cnt[i]){
			max_cnt = cnt[i];
			max_alpha = i + 'A';
		}
	}
	for(int i = 0;i < 26;i++){
		if(max_alpha != i + 'A' && max_cnt == cnt[i]){
			cout << "?";
			return 0;
		}
	}
	cout << max_alpha;
	return 0;
}
