#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int box[55][55];
int vis[55][55];

int dx[] = {0, 0, -1, 1, -1, 1, 1, -1};
int dy[] = {-1, 1, 0, 0, -1, -1, 1, 1};

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int w, h;
	
	while(1){
		cin >> w >> h;
		
		if(!w && !h) break;
		
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				cin >> box[i][j];
			}
		}
		
		int ans = 0;
		queue<pair<int, int>> Q;
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				if(box[i][j] && !vis[i][j]){
					ans++;
					vis[i][j] = 1;
					Q.push({i, j});
					
					while(!Q.empty()){
						auto cur = Q.front(); Q.pop();
						for(int dir = 0;dir < 8;dir++){
							int nx = dx[dir] + cur.x;
							int ny = dy[dir] + cur.y;
							
							if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
							if(vis[nx][ny] || !box[nx][ny]) continue;
							
							vis[nx][ny] = 1;
							Q.push({nx, ny});
						}
					}
					
				}
			}
		}
		
		cout << ans << '\n';
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				vis[i][j] = 0;
			}
		}
	}
	return 0;
}
