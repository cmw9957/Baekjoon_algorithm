#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int cnt = 0;
		int people, seat;
		cin >> people >> seat;
		int arr[505] = {0};
		while(people--){
			int choice;
			cin >> choice;
			if(arr[choice]) cnt++;
			else			arr[choice] = 1;
		}
		cout << cnt << '\n';
	}
	return 0;
}
