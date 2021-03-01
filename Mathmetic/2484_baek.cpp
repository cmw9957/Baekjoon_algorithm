#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int max_ans = 0;
	while(n--){
		int num;
		int same_cnt;
		map<int, int> m;
		for(int i = 0;i < 4;i++){
			cin >> num;
			m[num]++;
		}
		auto it = m.begin();
		if(m.size() == 1)
			max_ans = max(max_ans, 50000 + it->first * 5000);
		else if(m.size() == 2){
			if(it->second == 2)
				max_ans = max(max_ans, 2000 + it->first * 500 + (++it)->first * 500);
			else{
				if(it->second == 1)
					max_ans = max(max_ans, 10000 + (++it)->first * 1000);
				else
					max_ans = max(max_ans, 10000 + it->first * 1000);
			}
		}
		else if(m.size() == 3){
			while(it->second != 2)
				it++;
			max_ans = max(max_ans, 1000 + it->first * 100);
		}
		else{
			while(it != --m.end()) it++;
			max_ans = max(max_ans, it->first * 100);
		}
	}
	cout << max_ans;
	return 0;
}
