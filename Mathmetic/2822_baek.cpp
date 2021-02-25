#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second > b.second;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int total = 0;
	vector<pair<int, int> > v;
	for(int i = 1;i <= 8;i++){
		int score;
		cin >> score;
		v.push_back({i, score});
	}
	sort(v.begin(), v.end(), cmp);
	for(int i = 0;i < 3;i++) v.pop_back();
	sort(v.begin(), v.end());
	for(int i = 0;i < 5;i++)
		total += v[i].second;
	cout << total << '\n';
	for(auto c : v) cout << c.first << ' ';
	return 0;
}
