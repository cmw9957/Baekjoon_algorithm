#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	int max = t+1;
	while(t){
		int d1, d2;
		cin >> d1 >> d2;
		cout << "Case " << max-t << ": " << d1+d2 << '\n';
		t--;
	}
	return 0;
}
