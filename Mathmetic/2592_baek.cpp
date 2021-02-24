#include<bits/stdc++.h>
using namespace std;
map<int, int> m;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second > b.second;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int aver = 0;
	int num;
	for(int i = 0;i < 10;i++){
		cin >> num;
		aver += num;
		m[num]++;
	}
	int maxi_num;
	int maxi = 0;
	for(auto it = m.begin();it != m.end();it++)
		maxi = max(maxi, it->second);
	for(auto it = m.begin();it != m.end();it++)
		if(it->second == maxi){
			maxi_num = it->first;
			break;
		}
	cout << aver/10 << '\n' << maxi_num;
	return 0;
}
