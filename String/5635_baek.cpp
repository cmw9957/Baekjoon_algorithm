#include<bits/stdc++.h>
using namespace std;

bool cmp(tuple<string, int, int, int> a, tuple<string, int, int, int> b){
	if(get<3>(a) == get<3>(b)){
		if(get<2>(a) == get<2>(b)){
			return get<1>(a) > get<1>(b);
		}
		return get<2>(a) > get<2>(b);
	}
	return get<3>(a) > get<3>(b);
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<tuple<string, int, int, int> > v(n);
	string name;
	int day, month, year;
	for(int i = 0;i < n;i++){
		cin >> name >> day >> month >> year;
		v[i] = make_tuple(name, day, month, year);
	}
	sort(v.begin(), v.end(), cmp);
	cout << get<0>(v[0]) << '\n' << get<0>(v[n-1]);
	return 0;
}
