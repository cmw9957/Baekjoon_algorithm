#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1){
		int n, p;
		cin >> n;
		if(!n) break;
		cin >> p;
		
		int l_n = n;
		int middle = n / 2;
		bool check = false;
		int a, b, c;
		for(int i =1;i <= middle;i += 2, l_n -= 2){
			if(p == i){
				a = i + 1; b = l_n - 1; c = l_n;
			} else if(p == i + 1){
				a = i; b = l_n - 1; c = l_n;
			} else if(p == l_n - 1){
				a = i; b = i + 1; c = l_n;
			} else if(p == l_n){
				a = i; b = i + 1; c = l_n - 1;
			}
		}
		cout << a << ' ' << b << ' ' << c << '\n';	
	}
	
	return 0;
}
