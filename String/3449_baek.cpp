#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	string a, b;
	
	cin >> t;
	while(t--){
		cin >> a >> b;
		
		int ans = 0;
		int len = a.length();
		
		for(int i = 0;i < len;i++)
			if(a[i] != b[i])
				ans++;
		
		cout << "Hamming distance is " << ans << '.' <<'\n';
	}
	return 0;
}
