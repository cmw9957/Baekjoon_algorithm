#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	vector<pair<int, int> > v;
	for(int i = 1;i <= n;i++)
		v.push_back(make_pair(i, i));
	
	for(int i = 0;i < m;i++){
		int a, b, temp;
		cin >> a >> b;
		swap(v[a-1].second, v[b-1].second);
	}
	
	for(int i = 0;i < n;i++)
		cout << v[i].second << ' ';
	return 0;
}
