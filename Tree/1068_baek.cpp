#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int cut;
int ans;
vector<int> adj[55];

int func(int cur){
	int leaf = 0;
	for(int nxt : adj[cur]){
		if(nxt == cut) continue;
		leaf += func(nxt);
	}
	
	if(!leaf)
		return 1;
	else
		return leaf;
}

int main(void)
{
	SET
	
	int n;
	cin >> n;
	
	int parent, root;
	for(int i = 0;i < n;i++){
		cin >> parent;
		
		if(parent == -1)
			root = i;
		else
			adj[parent].push_back(i);
	}
	
	cin >> cut;
	if(root == cut)
		cout << 0;
	else
		cout << func(root);
	
	return 0;
}
