#include<bits/stdc++.h>
using namespace std;

int fact(int a){
	if(a == 1 || a == 0)
		return 1;
	return a * fact(a-1);
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	
	cin >> n >> k;
	
	cout << fact(n)/(fact(k)*fact(n-k));
	return 0;
}
