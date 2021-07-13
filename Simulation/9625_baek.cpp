#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a = 1, b = 0, k;
	cin >> k;
	
	for(int i = 0;i < k;i++){
		int temp;
		temp = b;
		b = a+b;
		a = temp;
	}
	
	cout << a << ' ' << b;
	return 0;
}
