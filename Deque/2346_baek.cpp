#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	deque<pair<int, int> > d;
	vector<int> ans;
	cin >> n;
	for(int i = 0;i < n;i++){
		int num;
		cin >> num;
		d.push_back(make_pair(i + 1, num));
	}
	
	while(d.size() != 1){
		auto data = d.front();
		d.pop_front();
		ans.push_back(data.first);
		int mv = data.second;
		
		if(mv > 0)
			mv--;
		
		for(int i = 0;i < abs(mv);i++){
			if(mv < 0){
				auto temp = d.back();
				d.pop_back();
				d.push_front(temp);
			}else{
				auto temp = d.front();
				d.pop_front();
				d.push_back(temp);	
			}
		}
	}
	ans.push_back(d.front().first);
	
	for(auto k : ans)
		cout << k << ' ';
	return 0;
}
