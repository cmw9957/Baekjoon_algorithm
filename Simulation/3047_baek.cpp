#include<bits/stdc++.h>
using namespace std;

int num[3];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i = 0;i < 3;i++){
		int n;
		cin >> n;
		num[i] = n;
	}
	sort(num, num + 3);
	
	string str;
	cin >> str;
	for(int i = 0;i < 3;i++)
		cout << num[str[i] - 'A'] << ' ';
	return 0;
}
