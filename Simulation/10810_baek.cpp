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
		v.push_back(make_pair(i, 0));
	
	for(int i = 0;i < m;i++){
		int a, b, c;
		cin >> a >> b >> c;
		a--; b--;
		
		for(int j = a;j <= b;j++){
			v[j].second = c;
		}
	}
	
	for(int i = 0;i < n;i++)
		cout << v[i].second << ' ';
	return 0;
}
