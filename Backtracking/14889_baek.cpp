#include<bits/stdc++.h>
using namespace std;
int n;
int box[25][25];
bool vis[25];
vector<int> start;
vector<int> link;
int total = 0x7f7f7f7f;
//처음에 구상한 것은 얼추 맞았는데 구현력이 많이 부족한 것같다. 많이 풀어보는 수밖에 없다. 
void func(int cur, int cnt){
	if(cnt == n/2){
		start.clear();
		link.clear();
		int s_sum = 0;
		int l_sum = 0;
		for(int i = 0;i < n;i++){
			if(vis[i]) start.push_back(i);
			else link.push_back(i);
		}
		for(int i = 0;i < n/2;i++){
			for(int j = 0;j < n/2;j++){
				s_sum += box[start[i]][start[j]];
				l_sum += box[link[i]][link[j]];
			}
		}
		total = min(total, abs(s_sum - l_sum));
		return ;
	}
	for(int i = cur;i < n;i++){
		if(!vis[i]){
			vis[i] = 1;
			func(i, cnt+1);
			vis[i] = 0;
		}
	}
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
	func(0, 0);
	cout << total;
	return 0;
}
