#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	long long arr[55];
	for(int i = 0;i < n;i++)
		cin >> arr[i];
	sort(arr, arr+n);
	cout << arr[0] * arr[n-1];
	return 0;
}
