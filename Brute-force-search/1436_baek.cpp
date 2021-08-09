#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	
	cin >> n;
	
	int num = 666;
	int cnt = 0;
	string s;
	
	while(1){
		s = to_string(num);
		for(int i = 0;i < s.length()-2;i++){
			if(s[i] == '6' && s[i+1] == '6' && s[i+2] == '6'){
				cnt++;
				if(cnt == n){
					cout << s;
					return 0;
				}
				break;
			}
		}
		num++;
	}
	return 0;
}
