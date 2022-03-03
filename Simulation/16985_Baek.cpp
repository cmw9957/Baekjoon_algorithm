#include<bits/stdc++.h>
using namespace std;

int turn[4][5][5][5];
int box[5][5][5];
int dx[] = {-1, 1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};

int find_exit(){
	if(box[0][0][0] == 0 || box[4][4][4] == 0) return 1234567; //�Ա��� �ⱸ�� �ϳ��� �������� �� 
	int dist[5][5][5] = {0,};	//�̵�Ƚ���� �湮���θ� ������ 3���迭 
	queue<tuple<int, int, int> > q;
	q.push(make_tuple(0, 0, 0));
	dist[0][0][0] = 1;
	while(!q.empty()){
		int x, y, z;
		tie(x, y, z) = q.front(); q.pop();
		for(int dir = 0;dir < 6;dir++){
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			int nz = z + dz[dir];
			
			if(nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || nz < 0 || nz >= 5) continue;
			if(box[nx][ny][nz] == 0 || dist[nx][ny][nz] != 0) continue;
			if(nx == 4 && ny == 4 && nz == 4) return dist[x][y][z];
			q.push(make_tuple(nx, ny, nz));
			dist[nx][ny][nz] = dist[x][y][z] + 1;
		}
	}
	return 1234567;
} 

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//��� ���� ���¸� turn 4���迭�� ����
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			for(int k = 0;k < 5;k++){
				cin >> turn[0][i][j][k];					//ȸ������ ���� ��
			}
		}
		
		for(int j = 0;j < 5;j++){
			for(int k = 0;k < 5;k++){
				turn[1][i][j][k] = turn[0][i][4 - k][j];	//1�� ȸ���� ��
			}
		}
		
		for(int j = 0;j < 5;j++){
			for(int k = 0;k < 5;k++){
				turn[2][i][j][k] = turn[1][i][4 - k][j];	//2�� ȸ���� �� 
			}
		}
		
		for(int j = 0;j < 5;j++){
			for(int k = 0;k < 5;k++){
				turn[3][i][j][k] = turn[2][i][4 - k][j];	//3�� ȸ���� �� 
			}
		}
	}
	
	int ans = 1234567;
	int order[5] = {0, 1, 2, 3, 4}; //0 ~ 4��° ���� � ������ ������ 
	
	do{
		for(int x = 0;x < 1024;x++){	//��� ����� ���� 1024�̴�. ���� 5���̰�, ȸ�� ��찡 4����̹Ƿ� 4^5 
			int brute = x;
			for(int i = 0;i < 5;i++){	//�� 
				int dir = brute & 3;	//�� ȸ���� ��츦 ��� ��� 
				brute >>= 2;			//���� ���� ȸ�� ��� 
				for(int j = 0;j < 5;j++){
					for(int k = 0;k < 5;k++){
						box[i][j][k] = turn[dir][order[i]][j][k];
					}
				}
			}
			ans = min(ans, find_exit());
		}
	}while(next_permutation(order, order + 5));	//next_permutation �Լ��� ���� order�� ��� ����� �� Ž�� 
	
	if(ans == 1234567) ans = -1;
	cout << ans;
	return 0;
}
