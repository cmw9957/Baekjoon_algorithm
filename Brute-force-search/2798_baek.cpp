#include<bits/stdc++.h>
using namsespace std; 

int card[100];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0;i < n;i++)
		cin >> card[i];
	
	int ans = 0;
	for(int i = 0;i < n-2;i++){
		for(int j = i+1;j < n-1;j++){
			for(int k = j+1;k < n;k++){
				int total = card[i] + card[j] + card[k];
				if(total <= m)
					ans = max(ans, total);
			}
		}
	}
	cout << ans;
	return 0;
}
