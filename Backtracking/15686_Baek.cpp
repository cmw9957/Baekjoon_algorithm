#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int n, m;
int box[52][52];
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	vector<pair<int, int> > house;
	vector<pair<int, int> > chicken;
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> box[i][j];
			if(box[i][j] == 1) house.push_back({i, j});
			else if(box[i][j] == 2) chicken.push_back({i, j});
		}
	}
	
	vector<int> search(chicken.size(), 1);
	fill(search.begin(), search.begin() + m, 0);
	int total = 0x7f7f7f7f;
	do{
		int dist = 0;
		for(auto h : house){
			int temp = 0x7f7f7f7f;
			for(int i = 0;i < chicken.size();i++){
				if(search[i] == 0)
					temp = min(temp, abs(h.X - chicken[i].X) + abs(h.Y - chicken[i].Y));
			}
			dist += temp;
		}
		total = min(total, dist);
	}while(next_permutation(search.begin(), search.end()));
	cout << total;
	return 0;
}
