#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string bit = bitset<20>(n).to_string();
		for(int i = 19;i >= 0;i--){
			if(bit[i] == '1')
				cout << 20 - i - 1 << ' ';
		}
	}
	return 0;
}
