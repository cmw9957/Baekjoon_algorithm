#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	int arr[105];
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0;i < n;i++)
			cin >> arr[i];
		sort(arr, arr+n);
		cout << 2*(arr[n-1] - arr[0]) << '\n';
	}
	return 0;
}
