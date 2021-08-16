#include<bits/stdc++.h>
using namespace std;

int vis[305][305];
int box[305][305];
int dx[] = {1, 0};
int dy[] = {0, 1};

void bfs(int x, int y, int cnt){
	
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> box[i][j];
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << box[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
