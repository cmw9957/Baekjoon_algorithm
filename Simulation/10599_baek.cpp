#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if(a == 0 && b == 0 && c == 0 && d == 0) break;
		
		int min = abs(b - c);
		int max = abs(a - d);
		
		cout << min << ' ' << max << '\n';
	}
	
	return 0;
}
