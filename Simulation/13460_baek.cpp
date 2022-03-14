#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define X first
#define Y second
using namespace std;

int n, m, ans = 0x7f7f7f7f;
pair<int, int> red, blue, hole;
char box[12][12];

//위, 오른, 아래, 왼 
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

pair<int, int> move(pair<int, int> m, int dir){
	while(1){
		int nx = m.X + dx[dir];
		int ny = m.Y + dy[dir];
		
		if(box[nx][ny] != '.') return m;
		m.X = nx; m.Y = n.Y;
	}
}

//위일때 어느게 먼저 더 위에 있는가를 파악하고 더 위에 있는걸 먼저 움직임
//이런식으로 오른쪽으로 움직일때 더 오른쪽에 있는거, 아래로 갈때 더 아래에 있는거
//왼쪽으로갈때 더 왼쪽에 있는거, 빨강, 파랑 좌표로 판단한다. 
void func(pair<int, int> r, pair<int, int> b, int dir, int cnt){
	if(cnt > 10) return ;
	
	if(dir == 0){
		if(r.X < b.X){
			move(r, dir);
			move(b, dir);
		}
		else{
			move(b, dir);
			move(r, dir);
		}
	}
	else if(dir == 1){
		if(r.Y < b.Y){
			move(b, dir);
			move(r, dir);
		}
		else{
			move(r, dir);
			move(b, dir);
		}
	}
	else if(dir == 2){
		
	}
	else if(dir == 3){
		
	}
}

int main(void)
{
	SET
	
	cin >> n >> m;
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> box[i][j];
			if(box[i][j] == 'R')
				red = make_pair({i, j});
			else if(box[i][j] == 'B')
				blue = make_pair({i, j});
			else if(box[i][j] == 'O')
				hole = make_pair({i, j});
		}
	}
	
	for(int i = 0;i < 4;i++)
		func(red, blue, i, 0);
	
	
	if(ans == 0x7f7f7f7f)
		ans = -1;
	
	cout << ans;
	return 0;
}
