#include<bits/stdc++.h>
using namespace std;
#define MAX (1024 * 3 + 2)
char box[MAX][MAX * 2 - 1];

void star(int x, int y){
	box[x][y] = '*';
	box[x + 1][y - 1] = '*'; box[x + 1][y + 1] = '*';
	for(int i = y - 2; i <= y + 2;i++)
		box[x + 2][i] = '*';
}

void func(int state, int x, int y){
	if(state == 3){
		star(x, y);
		return ;
	}
	
	int n_state = state / 2;
	func(n_state, x, y);
	func(n_state, x + n_state, y - n_state);
	func(n_state, x + n_state, y + n_state);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	func(n, 0, n - 1);
	for(int i = 0;i < n;i++){
		for(int ii = 0;ii < n * 2 - 1;ii++){
			if(box[i][ii] == '*') cout << '*';
			else				  cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}
