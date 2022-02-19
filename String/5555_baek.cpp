#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string word;
	cin >> word;
	
	int n, cnt = 0;
	cin >> n;
	while(n--){
		string str;
		cin >> str;
		str += str;
		
		if(str.find(word) != string::npos)
			cnt++;
	}
	cout << cnt;
	
	return 0;
}
