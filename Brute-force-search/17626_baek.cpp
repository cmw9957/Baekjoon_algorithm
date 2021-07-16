#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	vector<int> v(n+1, 0);
	v[1] = 1;
	
	for(int i = 2;i <= n;i++){
		int minn = 0x7f7f7f7f;
		for(int j = 1;j*j <= i;j++){
			int temp = i - j*j;
			minn = min(minn, v[temp]);
		}
		v[i] = minn+1;
	}
	cout << v[n];
	return 0;
}
