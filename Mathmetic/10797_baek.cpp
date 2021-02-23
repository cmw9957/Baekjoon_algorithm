#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num;
	cin >> num;
	int cnt = 0;
	for(int i = 0;i < 5;i++){
		int car_num;
		cin >> car_num;
		if(car_num == num) cnt++;
	}
	cout << cnt;
	return 0;
}
