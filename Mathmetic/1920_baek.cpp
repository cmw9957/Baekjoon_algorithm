#include<bits/stdc++.h>
using namespace std;
int num[100005];
int ans[100005];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> num[i];
	sort(num, num+n);
	cin >> m;
	for(int i = 0;i < m;i++){
		cin >> ans[i];
		if(binary_search(num, num+n, ans[i])) cout << 1 << '\n';
		else 								  cout << 0 << '\n';
	}
	return 0;
}
