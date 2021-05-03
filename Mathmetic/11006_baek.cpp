#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	
	cin >> t;
	while(t--){
		int t_leg, t_chicken;
		cin >> t_leg >> t_chicken;
		int cut_chicken = t_chicken * 2 - t_leg;
		cout << cut_chicken << ' ' << t_chicken - cut_chicken << '\n';
	}
	return 0;
}
