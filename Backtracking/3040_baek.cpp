#include<bits/stdc++.h>
using namespace std;
int arr[9];
vector<int> v;
bool vis[9];
void func(int cnt, int sum){
	if(cnt == 7){
		if(sum != 100) return ;
		for(auto c : v) cout << c << '\n';
		exit(0);
	}
	for(int i = 0;i < 9;i++){
		if(!vis[i]){
			vis[i] = true; 
			v.push_back(arr[i]);
			func(cnt+1, sum + arr[i]);
			vis[i] = false;
			v.pop_back();
		}
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i = 0;i < 9;i++)
		cin >> arr[i];
	func(0, 0);
	return 0;
}
