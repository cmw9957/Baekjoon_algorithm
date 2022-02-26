#include<bits/stdc++.h>
using namespace std;

int arr[100005];
int state[100005];

void func(int i){
	int cur = i;
	while(1){
		state[cur] = i;
		cur = arr[cur];
		
		if(state[cur] == i){
			while(state[cur] != -1){
				state[cur] = -1;
				cur = arr[cur];
			}
			return ;
		}
		else if(state[cur] != 0) return ;
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		for(int i = 1;i <= n;i++)
			cin >> arr[i];
		
		fill(state+1, state+n+1, 0);
		for(int i = 1;i <= n;i++)
			if(state[i] == 0) func(i);
		
		int cnt = 0;
		for(int i = 1;i <= n;i++)
			if(state[i] != -1) cnt++;
		
		cout << cnt << '\n';
	}
	return 0;
}
