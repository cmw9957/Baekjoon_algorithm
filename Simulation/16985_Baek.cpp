#include<bits/stdc++.h>
using namespace std;
#define Z get<0>(cur)
#define X get<1>(cur)
#define Y get<1>(cur)

int ans = 100;
int box1[5][5][5];
int box2[5][5][5];
int dx[] = {0, 0, -1, 1, 0, 0};
int dy[] = {-1, 1, 0, 0, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};

bool is_exit(int x, int y, int z){
	int e_x = 4, e_y = 4, e_z = 4;
	if(x) e_x = 0;
	if(y) e_y = 0;
	if(z) e_z = 0;
	
	if(box1[z][x][y] || box1[e_z][e_x][e_y]) return false;
	return true;
}

void rotate(int z){
	int temp[5][5];
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			temp[i][j] = box2[z][4 - j][i];
		}
	}
	
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			box2[z][i][j] = temp[i][j];
		}
	}
}

void go_exit(int x, int y, int z){
	int e_x = 4, e_y = 4, e_z = 4;
	if(x) e_x = 0;
	if(y) e_y = 0;
	if(z) e_z = 0;
	
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			for(int k = 0;k < 5;k++){
				box2[i][j][k] = box1[i][j][k];
			}
		}
	}
	
	queue<tuple<int, int, int> > q;
	q.push(make_tuple(z, x, y));
	box2[z][x][y] = 1;
	while(!q.empty()){
		auto cur = q.front(); q.pop();
		for(int dir = 0;dir < 6;dir++){
			int nx = X + dx[dir];
			int ny = Y + dy[dir];
			int nz = Z + dz[dir];
			
			if(nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || nz < 0 || nz >= 5) continue;
			if(box2[nz][nx][ny] != 0) continue;
			box2[nz][nx][ny] = box2[Z][X][Y] + 1;
			if(nx == e_x && ny == e_y && nz == e_z){
				while(!q.empty()) q.pop();
				break;
			}
			q.push(make_tuple(nz, nx, ny));
		}
	}
	ans = min(ans, box2[e_z][e_x][e_y]);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int z = 0;z < 5;z++){
		for(int x = 0;x < 5;x++){
			for(int y = 0;y < 5;y++){
				cin >> box1[z][x][y];
			}
		}
	}
	
	return 0;
}
