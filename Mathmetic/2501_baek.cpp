#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num, idx;
	cin >> num >> idx;
	int cnt = 0;
	vector<int> v;
	for(int i = 1;i <= num;i++){
		if(!(num%i)){
			++cnt;
			if(cnt == idx){
				cout << i;
				return 0;
			}
		}
	}
	cout << 0;
	return 0;
}
