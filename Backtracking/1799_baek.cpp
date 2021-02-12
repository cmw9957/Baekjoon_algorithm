#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int n;
int ans[2];
int box[12][12]; 
bool diag1[150];			//왼쪽 하단에서 오른쪽 상단으로의 대각선 
bool diag2[150];			//왼쪽 상단에서 오른쪽 하단으로의 대각선 

void func(int row, int col, int cnt, int color){
	if(col >= n){
		row++;
		if(col%2 == 0) col = 1;
		else col = 0;
	}
	if(row >= n){
		ans[color] = max(ans[color], cnt);
		return ;
	}
	if(box[row][col] && !diag1[row+col] && !diag2[col-row+n-1]){
		diag1[row+col] = diag2[col-row+n-1] = 1;
		func(row, col+2, cnt+1, color);
		diag1[row+col] = diag2[col-row+n-1] = 0;
	}
	func(row, col+2, cnt, color);
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> box[i][j];
		}
	}
	func(0, 0, 0, 0);
	func(0, 1, 0, 1);
	cout << ans[0] + ans[1];
	return 0;
}
