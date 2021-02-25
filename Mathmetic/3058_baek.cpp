#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		vector<int> v;
		int sum = 0;
		for(int i = 0;i < 7;i++){
			int num;
			cin >> num;
			if(!(num%2)){
				sum += num;
				v.push_back(num);
			}
		}
		sort(v.begin(), v.end());
		cout << sum << ' ' << v[0] << '\n';
	}
	return 0;
}
