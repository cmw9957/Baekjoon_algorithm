#include<bits/stdc++.h>
using namespace std;
#define MAX 9
int box[MAX][MAX];
bool row[MAX][MAX];
bool col[MAX][MAX];
bool three_box[MAX][MAX];

void func(int cnt){
	int x = cnt/MAX;
	int y = cnt%MAX;
	if(cnt == 81){
		for(int i = 0;i < MAX;i++){
			for(int j = 0;j < MAX;j++){
				cout << box[i][j] << ' ';
			}
			cout << '\n';
		}
		exit(0);
	}
	if(box[x][y] == 0){
		for(int i = 1;i <= MAX;i++){
			if(!row[x][i] && !col[y][i] && !three_box[(x/3)*3 + (y/3)][i]){
				row[x][i] = true;
				col[y][i] = true;
				three_box[(x/3)*3 + (y/3)][i] = true;
				box[x][y] = i;
				func(cnt+1);
				row[x][i] = false;
				col[y][i] = false;
				three_box[(x/3)*3 + (y/3)][i] = false;
				box[x][y] = 0;
			}
		}
	}
	else func(cnt+1);
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i = 0;i < MAX;i++)
		for(int j = 0;j < MAX;j++)
			cin >> box[i][j];
	
	for(int i = 0;i < MAX;i++){
		for(int j = 0;j < MAX;j++){
			if(box[i][j]){
				row[i][box[i][j]] = true;
				col[j][box[i][j]] = true;
				three_box[(i/3)*3 + (j/3)][box[i][j]] = true;
			}
		}
	}
	func(0);
	return 0;
}
