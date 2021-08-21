#include<bits/stdc++.h>
using namespace std;

int n, m;
int box[305][305];
int vis[305][305];

int dx[] = {0, 1};
int dy[] = {1, 0};

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
	
	queue<tuple<int, int, int> > Q;
	Q.push(make_tuple(0, 0, 0));
	vis[0][0] = 1;
	
	while(!Q.empty()){
		auto cur = Q.front(); Q.pop();
		int x = get<0>(cur);
		int y = get<1>(cur);
		int item = get<2>(cur);
		
		if(x == n-1 && y == m-1){
			cout << item;
			return 0;
		}
		
		for(int dir = 0;dir < 2;dir++){
			for(int i = 1;i <= box[x][y];i++){
				int nx = x + dx[dir] * i;
				int ny = y + dy[dir] * i;
				
				if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
				if(vis[nx][ny]) continue;
				
				vis[nx][ny] = 1;
				Q.push(make_tuple(nx, ny, item+1));
			}
		}
	}
	return 0;
}
