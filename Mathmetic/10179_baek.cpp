#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	double price;
	cin >> t;
	
	while(t--){
		cin >> price;
		price -= price/5;
		
		printf("$%.2lf\n", price);
	}
	return 0;
}
