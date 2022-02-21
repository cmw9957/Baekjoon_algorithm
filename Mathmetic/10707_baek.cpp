#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c, d, p, ans_x, ans_y;
	cin >> a >> b >> c >> d >> p;
	
	ans_x = a * p;
	if(p <= c)
		ans_y = b;
	else
		ans_y = b + (p - c) * d;
	
	int ans = (ans_x < ans_y) ? ans_x : ans_y;
	cout << ans;
	return 0;
}
