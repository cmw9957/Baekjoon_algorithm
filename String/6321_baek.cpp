#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for(int i = 1;i <= n;i++){
		string str;
		cin >> str;
		
		cout << "String #" << i << '\n';
		for(int j = 0;j < str.length();j++){
			if(str[j] == 'Z') str[j] = 'A';
			else			  str[j]++;
		}
		cout << str << "\n\n";
	}
	
	return 0;
}
