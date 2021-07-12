#include<bits/stdc++.h>
using namespace std;

string fish[15];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	
	for(int i = 0;i < n;i++){
		cin >> fish[i];
		reverse(fish[i].begin(), fish[i].end());
	}
	
	for(int i = 0;i < n;i++)
		cout << fish[i] << '\n';
	return 0;
}
