#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = n-1-i;j > 0;j--) cout << ' ';
		for(int j = 0;j < i*2+1;j++){
			if(i != n-1){
				if(j == 0 || j == i*2) cout << '*';
				else				   cout << ' ';
			}
			else
				cout << '*';
		}
		cout << '\n';
	}
	return 0;
}
