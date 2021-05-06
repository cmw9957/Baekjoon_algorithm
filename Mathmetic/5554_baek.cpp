#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 4;
	int sum = 0;
	while(t--){
		int time;
		cin >> time;
		sum += time;
	}
	cout << sum / 60 << '\n' << sum % 60;
	return 0;
}
