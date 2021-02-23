#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	vector<int> v;
	int sum = 0;
	for(int i = 0;i < n;i++){
		int tap;
		cin >> tap;
		v.push_back(tap);
		if(i != 0)
			sum += --v[i-1];
		
	}
	sum += v[n-1];
	cout << sum;
	return 0;
}
