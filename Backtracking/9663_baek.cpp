#include<bits/stdc++.h>
using namespace std;
int n, cnt;
bool vis[30];
bool vis2[30];
bool vis3[30];
void func(int cur){
	if(cur == n){
		cnt++;
		return ;
	}
	for(int i = 0;i < n;i++){
		if(vis[i] || vis2[cur+i] || vis3[cur-i+n-1]) continue;
		vis[i] = 1;
		vis2[cur+i] = 1;
		vis3[cur-i+n-1] = 1;
		func(cur+1);
		vis[i] = 0;
		vis2[cur+i] = 0;
		vis3[cur-i+n-1] = 0;
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	func(0);
	cout << cnt;
	return 0;
}
