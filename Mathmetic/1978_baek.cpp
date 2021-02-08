#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0;
	while(n--){
		int num;
		cin >> num;
		bool chk = false;
		for(int i = 2;i < num;i++){
			if(num%i == 0){
				chk = true;
				break;
			}
		}
		if(num == 1) continue;
		if(!chk || num == 2) cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
