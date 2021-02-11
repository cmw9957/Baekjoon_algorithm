#include<bits/stdc++.h>
using namespace std;
int l, c;
char arr[20];
char arr2[20];
bool vis[20];
void func(int cur){
	if(cur == l){
		bool is_right = false;
		int cnt = 0;
		for(int i = 0;i < l;i++){
			if(arr2[i] == 'a' || arr2[i] == 'e' || arr2[i] == 'i' || arr2[i] == 'o' || arr2[i] == 'u')
				is_right = true;
			else cnt++;
			if(is_right && cnt >= 2) break;
		}
		if(is_right && cnt >= 2){
			for(int i = 0;i < l;i++)
				cout << arr2[i];
			cout << '\n';
		}
		return ;
	}
	for(int i = 0;i < c;i++){
		if(!vis[i]){
			if(cur != 0 && arr2[cur-1] > arr[i]) continue;
			arr2[cur] = arr[i];
			vis[i] = true;
			func(cur+1);
			vis[i] = false;
		}
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> l >> c;
	for(int i = 0;i < c;i++)
		cin >> arr[i];
	sort(arr, arr+c);
	func(0);
	return 0;
}
