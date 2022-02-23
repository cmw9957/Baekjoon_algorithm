#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, t;
	cin >> n >> t;
	int result = 0, cnt = 0;
	for(int i = 0;i < n;i++){
		int num;
		cin >> num;
		result += num;
		if(result > t) break;
		cnt++;
	}
	cout << cnt;
	return 0;
}
