#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int people_cnt, size, total;
	cin >> people_cnt >> size;
	total = people_cnt*size;
	for(int i = 0;i < 5;i++){
		int people;
		cin >> people;
		cout << people - total << ' ';
	}
	return 0;
}
