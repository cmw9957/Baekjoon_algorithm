#include<bits/stdc++.h>
using namespace std;

int max_size;
int box[105][105];
int h, w, n;

vector<pair<int, int>> v;
vector<bool> vis;

int f(int x_row, int y_col, int i_x, int j_y){
	for(int i = i_x;i < x_row;i++){
		for(int j = j_y;j < y_col;j++){
			if(box[i][j])
				return 0;
		}
	}
	
	for(int i = x;i < row;i++){
		for(int j = y;j < col;j++){
			
		}
	}
}

void func(int row, int col){
	int x = h - row;
	int y = w - col;
	for(int i = 0;i <= x;i++){
		for(int j = 0;j <= y;j++){
			f(row, col, x, y);
		}
	}
}

void func2(){
	for(int i = 0;i < n;i++){
		if(!vis[i]){
			int row = v[i].first;
			int col = v[i].second;
			
			vis[i] = true;
			
			func(row, col);
			func2();
			
			vis[i] = false;
		}
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> h >> w >> n;
	
	while(n--){
		int r, c;
		cin >> r >> c;
		
		v.push_back({r, c});
	}
	
	return 0;
}
