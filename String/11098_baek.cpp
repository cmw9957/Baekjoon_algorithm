#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b){
	return a.first > b.first;
}

int main(){
	int n, p;
	cin >> n;
	while(n--){
		cin >> p;
		vector<pair<int, string> > c(p);
		for(int i = 0;i < p;i++)
			cin >> c[i].first >> c[i].second;
		sort(c.begin(), c.end(), cmp);
		cout << c[0].second << '\n';
	}
}
