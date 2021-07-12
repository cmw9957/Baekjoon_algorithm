#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	cout << min(a+d, b+c);
	return 0;
}
