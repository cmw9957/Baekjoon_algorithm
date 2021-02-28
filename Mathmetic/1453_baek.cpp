#include<bits/stdc++.h>
using namespace std;
int seat[101];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, cnt = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		int num;
		cin >> num;
		if(seat[num]) cnt++;
		else seat[num] = 1;
	}
	cout << cnt;
	return 0;
}
