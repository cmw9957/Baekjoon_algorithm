#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for(int k = 1;k <= n;k++){
		int cnt = 0;
		for(int i = 0;i < 10;i++){
			int ans;
			cin >> ans;
			if(((i % 5) + 1) == ans) cnt++;
		}
		if(cnt == 10)
			cout << k << '\n';	
	}
	return 0;
}
