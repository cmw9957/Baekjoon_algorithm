#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;
int n, l, r;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

int box[55][55];
int vis[55][55];
int chk[55][55];

void change_num(int num){
	int c = 0;
	int list[num] = {};
	memset(vis, 0, sizeof(vis));
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			int cnt = 0;
			int total = 0;
			if(!vis[i][j]){
				cnt++;
				total += box[i][j];
				vis[i][j] = 1;
				queue<pair<int, int> > Q;
				Q.push({i, j});
				while(!Q.empty()){
					auto cur = Q.front(); Q.pop();
					for(int dir = 0;dir < 4;dir++){
						int nx = cur.x + dx[dir];
						int ny = cur.y + dy[dir];
						
						if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if(vis[nx][ny]) continue;
						if(chk[cur.x][cur.y] != chk[nx][ny]) continue;
						
						cnt++;
						total += box[nx][ny];
						Q.push({nx, ny});
						vis[nx][ny] = 1;
					}
				}
				list[c++] = total / cnt;
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			box[i][j] = list[chk[i][j] - 1];
		}
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> l >> r;
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> box[i][j];
		}
	}
	
	int ans = 0;
	while(1){
		int num = 0;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				if(!vis[i][j]){
					num++;
					chk[i][j] = num;
					vis[i][j] = 1;
					queue<pair<int, int> > Q;
					Q.push({i, j});
					while(!Q.empty()){
						auto cur = Q.front(); Q.pop();
						for(int dir = 0;dir < 4;dir++){
							int nx = cur.x + dx[dir];
							int ny = cur.y + dy[dir];
							int diff = abs(box[cur.x][cur.y] - box[nx][ny]);
							
							if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
							if(vis[nx][ny]) continue;
							if(diff < l || diff > r) continue;
							
							Q.push({nx, ny});
							vis[nx][ny] = 1;
							chk[nx][ny] = num;
						}
					}
				}
			}
		}
		
		if(num == n * n) break;
		change_num(num);
		
		ans++;
		memset(vis, 0, sizeof(vis));
	}
	
	cout << ans;
	return 0;
}
