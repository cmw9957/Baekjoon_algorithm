#include<bits/stdc++.h>
using namespace std;
#define MAX 101
int ans[105][105];		//���������� Ŀ�� ���ѰŸ� �����ϴ� �� 
int box[105][105];		//Ŀ�� �ϱ� �� �迭 
int box2[105][105];		//Ŀ�� �� �迭 

void rotate(int n){
	while(n--){
		for(int i = 0;i < MAX;i++){
			for(int j = 0;j < MAX;j++){
				if(box[MAX - j - 1][i] == -2)
					box2[i][j] = -1;
				else if(box[MAX - j - 1][i] == -1)
					box2[i][j] = 1;
				else 
					box2[i][j] = box[MAX - j - 1][i];
			}
		}
		
		int x, y;
		for(int i = 0;i < MAX;i++){
			for(int j = 0;j < MAX;j++){
				if(box[i][j] == -1){
					x = i;
					y = j;
				}
			}
		}
	}
	
	
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	while(n--){
		int x, y, d, g;
		cin >> x >> y >> d >> g;
		
	}
	
	return 0;
}
