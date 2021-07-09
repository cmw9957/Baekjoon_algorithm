#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int l, a, b, c, d;
	int k_day = 0;
	int m_day = 0;
	int ans = 0;
	
	cin >> l >> a >> b >> c >> d;
	
	k_day = a / c;
	m_day = b / d;
	
	if(a%c)
		k_day++;
	if(b%d)
		m_day++;
		
	ans = max(k_day, m_day);
	
	cout << l - ans;
	return 0;
}
