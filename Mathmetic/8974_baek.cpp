#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, ans = 0, se = 1;
	cin >> a >> b;
	
	bool check = false;
	for(int i = 1;;i++){
		for(int j = 0;j < i;j++, se++){
			if(se >= a && se <= b)
				ans += i;
			if(se > b){
				check = true;
				break;
			}
		}
		if(check) break;
	}
	cout << ans;
	return 0;
}
