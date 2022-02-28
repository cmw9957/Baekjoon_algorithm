#include<bits/stdc++.h>
using namespace std;

pair<int, int> egg[10];
int vis[10];
int n;
int ans;

void func(pair<int, int> cur, pair<int, int> nxt , int cnt){
	if(cur.first <= 0){
		ans = max(ans, cnt);
		return ;
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	
	for(int i = 0;i < n;i++){
		int dura, weight;
		cin >> dura >> weight;
		egg[i] = {dura, weight};
	}
	
	for(int i = 0;i < n - 1;i++){
		if(vis[i] == 0){
			vis[i] = 1;
			func(egg[i], egg[i + 1], 0);
			vis[i] = 0;
		}	
	}
	return 0;
}
