#include<bits/stdc++.h>
using namespace std;
int num[1005];
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> num[i];
	sort(num, num+n);
	for(int i = 0;i < n;i++)
		cout << num[i] << '\n';
	return 0;
}
