#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	for(int i = 0;i < n;i++){
		for(int j = n;j >= n-i;j--) cout << '*';
		for(int j = 0;j < (n-i)*2-2;j++) cout << ' ';
		for(int j = n;j >= n-i;j--) cout << '*';
		cout << '\n';
	}
	for(int i = 0;i < n-1;i++){
		for(int j = 0;j < n-1-i;j++) cout << '*';
		for(int j = 0;j < i*2+2;j++) cout << ' ';
		for(int j = 0;j < n-1-i;j++) cout << '*';
		cout << '\n';
	}
	return 0;
}
