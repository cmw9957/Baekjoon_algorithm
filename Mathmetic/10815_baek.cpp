#include<bits/stdc++.h>
using namespace std;
int num[500005];
int ans[500005];
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> num[i];
	sort(num, num+n);
	int m;
	cin >> m;
	for(int i = 0;i < m;i++){
		cin >> ans[i];
		if(binary_search(num, num+n, ans[i])) cout << 1 << ' ';
		else cout << 0 << ' ';
	}
	return 0;
}
