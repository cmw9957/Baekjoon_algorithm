#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	char ans[10005];
	string s, temp = "";
	
	while(getline(cin, s))
		temp += s;
	
	int len = temp.length();
	for(int i = 0;i < len;i++)
		ans[i] = temp[i];
	ans[len] = '\0';
	char *ps = ans;
	
	int total = 0;
	while(*ps != '\0')
		cout << *(ps++);
	return 0;
}
