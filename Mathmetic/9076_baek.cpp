#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		deque<int> dq;
		for(int j = 0;j < 5;j++){
			int score;
			cin >> score;
			dq.push_back(score);
		}
		sort(dq.begin(), dq.end());
		dq.pop_front();
		dq.pop_back();
		if(dq[2] - dq[0] >= 4) cout << "KIN" << '\n';
		else				   cout << dq[0] + dq[1] + dq[2] << '\n';
	}
	return 0;
}
