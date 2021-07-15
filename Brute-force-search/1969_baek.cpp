#include<bits/stdc++.h>
using namespace std;

string s[1005];

char what_max(int a, int t, int g, int c){
	int temp = max(a, max(t, max(g, c)));
	
	if(temp == a)
		return 'A';
	else if(temp == c)
		return 'C';
	else if(temp == g)
		return 'G';
	else if(temp == t)
		return 'T';
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	
	for(int i = 0;i < n;i++)
		cin >> s[i];
	
	int h_dis = 0;
	string ans = "";
	for(int i = 0;i < m;i++){
		int a = 0, t = 0, g = 0, c = 0;
		for(int j = 0;j < n;j++){
			if(s[j][i] == 'A') 		a++;
			else if(s[j][i] == 'T') t++;
			else if(s[j][i] == 'G') g++;
			else if(s[j][i] == 'C') c++;
		}
		char temp = what_max(a, t, g, c);
		
		if(temp == 'A')
			h_dis += t+g+c;
		else if(temp == 'T')
			h_dis += a+g+c;
		else if(temp == 'G')
			h_dis += a+t+c;
		else if(temp == 'C')
			h_dis += a+t+g;
			
		ans += temp;
	}
	cout << ans << '\n' << h_dis;
	return 0;
}
