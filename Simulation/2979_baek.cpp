#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c;
	cin >> a >> b >> c;
	vector<pair<int, int> > v;
	
	for(int i = 0;i < 3;i++){
		int f_time, l_time;
		cin >> f_time >> l_time;
		v.push_back(make_pair(f_time, l_time));
	}
	
	int fee = 0, end = max(v[0].second, max(v[1].second, v[2].second));
	for(int i = 1;;i++){
		if(i >= end) break;
		
		int check_cnt = 0;
		for(int j = 0;j < 3;j++)
			if(i >= v[j].first && i < v[j].second) check_cnt++;
		
		if(check_cnt == 1)
			fee += a;
		else if(check_cnt == 2)
			fee += b * 2;
		else if(check_cnt == 3)
			fee += c * 3;
	}
	cout << fee;
	return 0;
}
