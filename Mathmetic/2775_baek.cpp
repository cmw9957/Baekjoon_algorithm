#include<bits/stdc++.h>
using namespace std;

int arr[1005][1005];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--){
		int k, n;
		cin >> k >> n;
		
		for(int i = 0;i <= k;i++){
			for(int j = 0;j <= n;j++){
				if(arr[i][j] || j == 0) continue;
				
				if(i == 0) arr[i][j] = j;
				else{
					arr[i][j] = arr[i-1][j] + arr[i][j-1];
				}
			}
		}
		cout << arr[k][n] << '\n';
	}
	return 0;
}
