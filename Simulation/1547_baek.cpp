#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int m;
	cin >> m;
	
	vector<pair<int, int> > v;
	for(int i = 1;i <= 3;i++)
		v.push_back(make_pair(i, 0));
	
	v[0].second = 1;
	while(m--){
		int x, y;
		cin >> x >> y;
		x -= 1; y -= 1;
		
		swap(v[x].second, v[y].second);
	}
	
	for(int i = 0;i < 3;i++)
		if(v[i].second) cout << v[i].first;
	return 0;
}
