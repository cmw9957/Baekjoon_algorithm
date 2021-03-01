#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a_total = 0, b_total = 0;
	while(n--){
		int a_score, b_score;
		cin >> a_score >> b_score;
		if(a_score > b_score) a_total++;
		else if(a_score < b_score) b_total++;
	}
	cout << a_total << ' ' << b_total;
	return 0;
}
