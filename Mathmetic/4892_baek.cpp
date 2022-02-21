#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i = 1;;i++){
		int n;
		cin >> n;
		if(!n) break;
		
		cout << i << ". ";
		n *= 3;
		
		if(!(n % 2)){
			n /= 2;
			cout << "even ";
		}
		else{
			n = (n + 1) / 2;
			cout << "odd ";
		}
		
		n *= 3;
		
		n /= 9;
		cout << n << '\n';
	}
	
	return 0;
}
