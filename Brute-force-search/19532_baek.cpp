#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	
	for(int x = -999;x < 1000;x++){
		for(int y = -999;y < 1000;y++){
			if(a*x+b*y == c && d*x+e*y == f){
				cout << x << ' ' << y << '\n';
			}
		}
	}
	return 0;
}
