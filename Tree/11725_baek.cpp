#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

vector<int> adj[100005];
int p[100005];

void func(int root){
	queue<int> q;
	q.push(root);
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(int nxt : adj[cur]){
			if(p[cur] == nxt) continue;
			p[nxt] = cur;
			q.push(nxt);
		}
	}
}

int main(void)
{
	SET
	
	int n;
	cin >> n;
	
	for(int i = 0;i < n-1;i++){
		int first, second;
		cin >> first >> second;
		
		adj[first].push_back(second);
		adj[second].push_back(first);
	}
	func(1);
	for(int i = 2;i <=n;i++) cout << p[i] << '\n';
	return 0;
}
