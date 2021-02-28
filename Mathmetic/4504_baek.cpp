#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while(1){
		int num;
		cin >> num;
		if(!num) break;
		if(num%n) cout << num << " is NOT a multiple of " << n << "." << '\n';
		else	  cout << num << " is a multiple of " << n << "." << '\n'; 			 
	}
	return 0;
}
