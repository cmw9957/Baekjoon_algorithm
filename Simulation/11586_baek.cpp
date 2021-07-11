#include<bits/stdc++.h>
using namespace std;

string m[105];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int state;
	cin >> n;
	
	for(int i = 0;i < n;i++)
		cin >> m[i];
	cin >> state;
	
	if(state == 1)
		for(int i = 0;i < n;i++)
			cout << m[i] << '\n';
	else if(state == 2){
		for(int i = 0;i < n;i++){
			string::iterator it = m[i].end()-1;
			for(;it != m[i].begin();it--)
				cout << *it;
			cout << *it << '\n';
		}
	}
	else if(state == 3)
		for(int i = n-1;i >= 0;i--)
			cout << m[i] << '\n';
	return 0;
}
