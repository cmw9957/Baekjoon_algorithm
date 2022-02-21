#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1){
		int a, b, c, op = 0;
		cin >> a >> b >> c;
		if(a == 0 && b == 0 && c == 0) break;
		
		if(c - b != b - a) op = 1;
		
		if(!op)
			cout << "AP " << c + (b - a) << '\n';
		else
			cout << "GP " << c * (b / a) << '\n';
	}
	return 0;
}
