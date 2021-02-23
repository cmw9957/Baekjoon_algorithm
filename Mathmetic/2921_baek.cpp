#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= i*2;j++){
			sum += j;
		}
	}
	cout << sum;
	return 0;
}
