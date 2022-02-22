#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--){
		int time;
		int ans = 0;
		cin >> time;
		
		for(int i = 1;i < time;i++){
			if(time >= (i + pow(i, 2))) ans = i;
			else break;
		}
		cout << ans << '\n';
	}
	return 0;
}
