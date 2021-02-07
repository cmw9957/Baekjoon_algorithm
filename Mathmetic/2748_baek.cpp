#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a = 0, b = 1, c = 0;
	int n;
	cin >> n;
	if(n == 1){
		cout << 1;
		return 0;
	}
	for(int i = 0;i < n-1;i++){
		c = a + b;
		a = b;
		b = c;
	}
	cout << c;
	return 0;
}
