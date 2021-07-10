#include<bits/stdc++.h>
using namespace std;

int N[15005];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int begin = 0, end = n-1;
	
	for(int i = 0;i < n;i++)
		cin >> N[i];
	sort(N, N+n);
	
	int ans = 0;
	while(begin < end && begin != end){
		if(N[begin]+N[end] == m){
			ans++;
			begin++;
			end--;
		}
		else if(N[begin]+N[end] < m)
			begin++;
		else
			end--;
	}
	
	cout << ans;
	return 0;
}
