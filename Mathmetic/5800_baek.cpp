#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for(int k = 1;k <= t;k++){
		int cnt;
		int max_num = 0, min_num = 0x7f7f7f7f, max_gap = 0;
		cin >> cnt;
		vector<int> v;
		while(cnt--){
			int score;
			cin >> score;
			v.push_back(score);
			max_num = max(max_num, score);
			min_num = min(min_num, score);
		}
		sort(v.begin(), v.end());
		for(int i = 0;i < v.size()-1;i++)
			max_gap = max(max_gap, v[i+1] - v[i]);
		cout << "Class " << k << '\n' << "Max " << max_num << ", Min " << min_num 
			 << ", Largest gap " << max_gap << '\n';
	}
	return 0;
}
