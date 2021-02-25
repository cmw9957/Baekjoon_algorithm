#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v1, v2;
	for(int i = 1;i <= 20;i++){
		int score;
		cin >> score;
		if(i <= 10) v1.push_back(score);
		else		v2.push_back(score);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	cout << v1[9] + v1[8] + v1[7] << ' ' << v2[9] + v2[8] + v2[7];
	return 0;
}
