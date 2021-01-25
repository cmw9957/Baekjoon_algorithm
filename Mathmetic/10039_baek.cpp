#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, sum = 0;
	for(int i = 0; i < 5;i++){
		cin >> n;
		if(n < 40)
			n = 40;
		sum += n;
	}
	
	cout << sum / 5 <<'\n';
	
	return 0;
}
