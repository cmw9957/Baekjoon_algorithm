#include<bits/stdc++.h>
using namespace std;

int num[205];
int len[205];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for(int i = 0;i < n;i++)
		cin >> num[i];
	
	//LIS 알고리즘 
	for(int i = 0;i < n;i++){
		len[i] = 1;
		for(int j = 0;j < i;j++){
			if(num[j] < num[i])
				len[i] = max(len[i], len[j] + 1);
		}
	}
	int cnt = 0;
	for(int i = 0;i < n;i++)
		cnt = max(cnt, len[i]);
	
	cout << n - cnt;
	return 0;
}
