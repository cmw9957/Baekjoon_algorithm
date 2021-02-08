#include<bits/stdc++.h>
using namespace std;
int n;
int arr[50];
int arr2[50];
bool vis[50];

void func(int cur){
	if(cur == 6){
		for(int i = 0;i < 6;i++)
			cout << arr2[i] << ' ';
		cout << '\n';
		return ;
	}
	for(int i = 0;i < n;i++){
		if(!vis[i]){
			if(cur != 0 && arr2[cur-1] >= arr[i]) continue;
			arr2[cur] = arr[i];
			vis[cur] = 1;
			func(cur+1);
			vis[cur] = 0;
		}
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(1){
		cin >> n;
		if(!n) break;
		for(int i = 0;i < n;i++)
			cin >> arr[i];
		func(0);
		cout << '\n';
	}
	return 0;
}
