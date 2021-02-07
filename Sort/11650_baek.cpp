#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.X == b.X)
		return a.Y < b.Y;
	return a.X < b.X;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int> > v(n);
	for(int i = 0;i < n;i++)
		cin >> v[i].X >> v[i].Y;
	sort(v.begin(), v.end(), cmp);
	for(int i = 0;i < n;i++)
		cout << v[i].X << ' ' << v[i].Y << '\n';
	return 0;
}
