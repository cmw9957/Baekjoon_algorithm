#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	float price[5] = {350.34, 230.90, 190.55, 125.30, 180.90};
	int t;
	cin >> t;
	
	while(t--){
		float ans = 0;
		int num;
		
		for(int i = 0;i < 5;i++){
			cin >> num;
			ans += price[i] * num;
		}
		printf("$%.2f\n", ans);
	}
	return 0;
}
