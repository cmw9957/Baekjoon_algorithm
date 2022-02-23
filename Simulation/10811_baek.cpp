#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	vector<int> v;
	
	for(int i = 1;i <= n;i++)
		v.push_back(i);
	
	for(int i = 0;i < m;i++){
		int a, b;
		cin >> a >> b;
		a--; b--;
		vector<int> temp;
		for(int j = b;j >= a;j--)
			temp.push_back(v[j]);
		
		for(int j = 0;j < temp.size();j++){
			v[a] = temp[j];
			a++;
		}
	}
	
	for(auto k : v)
		cout << k << ' ';
	return 0;
}
