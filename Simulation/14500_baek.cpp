#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

#define X first
#define Y second

int n, m;
int box[502][502];

vector<vector<pair<int, int> > > tetro;

//���� X������ Y�� ���� ���� ���밪�� 1�̸� ��, ��� ������ ���̰�,
//���� Y������ X�� ���� ���� ���밪�� 1�̸� ��, �Ϸ� ������ ���̴�. 
bool isadj(pair<int, int> a, pair<int, int> b){
	if(a.X == b.X) return abs(a.Y - b.Y) == 1;
	if(a.Y == b.Y) return abs(a.X - b.X) == 1;
	return false;
}

bool isConn(vector<pair<int, int> >& shape){
	bool flag = false;
	for(int i = 0;i < 4;i++){
		int cnt = 0;
		for(int j = 0;j < 4;j++)
			if(isadj(shape[i], shape[j])) cnt++;
		
		if(cnt == 0) return false;
		if(cnt >= 2) flag = true;
	}
	return flag;
}

int main(void)
{
	SET
	
	cin >> n >> m;
	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)
			cin >> box[i][j];
	
	//4x4���� ���� ������ ��� ��Ʈ�ι̳���� ����� �ڵ� 
	vector<int> brute(16);
	fill(brute.begin() + 12, brute.end(), 1);
	do{
		vector<pair<int, int> > shape;
		for(int i = 0;i < 16;i++)
			if(brute[i] == 1)
				shape.push_back({i / 4, i % 4});
		if(isConn(shape)) tetro.push_back(shape);
	}while(next_permutation(brute.begin(), brute.end()));
	
	int ans = 0;
	for(int i = 0;i <= n-4;i++){
		for(int j = 0;j <= m-4;j++){
			for(auto shape : tetro){
				int tot = 0;
				for(auto coor : shape)
					tot += box[i + coor.X][j + coor.Y];
				ans = max(tot, ans);
			}
		}
	}
	cout << ans;
	return 0;
}
