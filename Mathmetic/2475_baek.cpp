#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num, ans = 0;
	for(int i = 0;i < 5;i++){
		cin >> num;
		ans += pow(num, 2);
	}
	cout << ans%10;
	return 0;
}
