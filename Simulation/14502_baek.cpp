#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define X first
#define Y second
using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

int n, m;
int box[15][15];
int wall[15][15];
int corona[15][15];
vector<pair<int, int>> virus;

void spread_shit(){
	queue<pair<int, int>> q;
	int size = virus.size();
	
	for(int i = 0;i < size;i++)
		q.push(virus[i]);
	
	while(!q.empty()){
		auto cur = q.front(); q.pop();
		corona[cur.X][cur.Y] = 2;
		for(int i = 0;i < 4;i++){
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if(box[nx][ny] != 0 || wall[nx][ny] != 0 || corona[nx][ny] != 0) continue;
			corona[nx][ny] = 2;
			q.push({nx, ny});
		}
	}
}

int count_area(){
	int cnt = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(box[i][j] == 0 && wall[i][j] == 0 && corona[i][j] == 0)
				cnt++;
		}
	}
	
	return cnt;
}

int main(void)
{
	SET
	cin >> n >> m;
	
	int size = n*m;
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> box[i][j];
			if(box[i][j] == 2)
				virus.push_back({i, j});
		}
	}
	
	int cnt = 0;
	pair<int, int> f_wall, s_wall, t_wall;
	for(int i = 0;i < size;i++){
		f_wall = make_pair(i/m, i%m);
		if(box[f_wall.X][f_wall.Y] != 0) continue;
		wall[f_wall.X][f_wall.Y] = 1;
		
		for(int j = i + 1;j < size;j++){
			s_wall = make_pair(j/m, j%m);
			if(box[s_wall.X][s_wall.Y] != 0) continue;
			wall[s_wall.X][s_wall.Y] = 1;
			
			for(int k = j + 1;k < size;k++){
				t_wall = make_pair(k/m, k%m);
				if(box[t_wall.X][t_wall.Y] != 0 || wall[t_wall.X][t_wall.Y] != 0) continue;
				wall[t_wall.X][t_wall.Y] = 1;
				spread_shit();
				int temp = count_area();
				cnt = max(cnt, temp);
				wall[t_wall.X][t_wall.Y] = 0;
				
				for(int e = 0;e < n;e++)
					fill(corona[e], corona[e]+m, 0);
			}
			wall[s_wall.X][s_wall.Y] = 0;
		}
		wall[f_wall.X][f_wall.Y] = 0;
	}
	cout << cnt;
	return 0;
}
