#include<bits/stdc++.h>
using namespace std;
int n, s;
int arr[25];
int cnt = 0;
void func(int cur, int sum){
	if(n == cur){
		if(s == sum) cnt++;
		return ;
	}
	func(cur+1, sum);
	func(cur+1, sum+arr[cur]);
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> s;
	for(int i = 0;i < n;i++)
		cin >> arr[i];
	func(0, 0);
	if(s == 0) --cnt;
	cout << cnt;
	return 0;
}
