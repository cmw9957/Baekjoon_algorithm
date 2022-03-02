#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int h, m, time;
	cin >> h >> m >> time;
	m += time;
	if(m >= 60){
		h += m / 60;
		m %= 60;
	}
	if(h >= 24)
		h %= 24;
	
	cout << h << ' ' << m;
	return 0;
}
