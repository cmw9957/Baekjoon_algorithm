#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int road[100005];
int n;
int gcd(int a, int b){
	int remain;
	while(b){
		remain = a%b;
		a = b;
		b = remain;
	}
	return a;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int idx = 0;
	for(int i = 0;i < n;i++)
		cin >> arr[i];
	sort(arr, arr+n);
	for(int i = 1;i < n;i++){
		road[idx++] = arr[i] - arr[i-1];
	}
	int gcd_num = gcd(road[0], road[1]);
	for(int i = 2;i < idx;i++)
		gcd_num = gcd(gcd_num, road[i]);
	int ans = 0;
	for(int i = 0;i < idx;i++)
		if(road[i] > gcd_num) ans += road[i] / gcd_num - 1;
	cout << ans;
	return 0;
}
