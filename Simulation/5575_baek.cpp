#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 3;
	
	while(n--){
		int f_h, f_m, f_s, l_h, l_m, l_s, h, m, s;
		cin >> f_h >> f_m >> f_s >> l_h >> l_m >> l_s;
		
		(l_s - f_s) < 0 ? (s = 60 + (l_s - f_s)), l_m-- : (s = l_s - f_s);
		(l_m - f_m) < 0 ? (m = 60 + (l_m - f_m)), l_h-- : (m = l_m - f_m);
		h = l_h - f_h;
		
		cout << h << ' ' << m << ' ' << s << '\n';
	}
	
	return 0;
}
