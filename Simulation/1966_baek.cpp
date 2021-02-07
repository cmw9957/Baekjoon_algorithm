#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	while(k--){
		int n,  idx, cnt = 0;
		cin >> n >> idx;
		deque<pair<int, int> > dq;
		vector<int> chk;
		bool fd = false;
		for(int i = 0;i < n;i++){
			int num, num2 = 0;
			cin >> num;
			chk.push_back(num);
			if(i == idx) num2 = 1;
			dq.push_back({num, num2});
		}
		sort(chk.begin(), chk.end(), cmp);
		for(int i = 0;i < chk.size();i++){
			while(1){
				auto temp = dq.front();
				if(chk[i] == temp.first){
					cnt++;
					dq.pop_front();
					if(temp.second) fd = 1;
					break;
				}
				dq.pop_front();
				dq.push_back(temp);
			}
			if(fd) break;
		}
		cout << cnt << '\n';
	}
	return 0;
}
