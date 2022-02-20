#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
	return a.second > b.second;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		vector<pair<int, int> > v;
		int sum = 0;
		for(int i = 0;i < n;i++){
			int num;
			cin >> num;
			sum += num;
			
			v.push_back(make_pair(i + 1, num));
		}
		sort(v.begin(), v.end(), compare);
		
		if(v[0].second == v[1].second){
			cout << "no winner" << '\n';
			continue;
		}
		if(v[0].second > sum / 2)
			cout << "majority winner " << v[0].first << '\n';
		else
			cout << "minority winner " << v[0].first << '\n';
	}
	
	return 0;
}
