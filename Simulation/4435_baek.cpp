#include<bits/stdc++.h>
using namespace std;

int gandalp[6] = {1, 2, 3, 3, 4, 10};
int sauron[7] = {1, 2, 2, 2, 3, 5, 10};

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	for(int j = 1;j <= t;j++){
		int g_score = 0, s_score = 0;
		int cnt;
		for(int i = 0;i < 13;i++){
			cin >> cnt;
			if(i < 6)
				g_score += cnt * gandalp[i];
			else
				s_score += cnt * sauron[i-6];
		}
		
		cout << "Battle " << j << ": ";
		int check = (g_score > s_score) ? 0 : (g_score == s_score) ? 1 : 2;
		
		if(check == 0)
			cout << "Good triumphs over Evil" << '\n';
		else if(check == 1)
			cout << "No victor on this battle field" << '\n';
		else
			cout << "Evil eradicates all trace of Good" << '\n';
		
	}
	
	return 0;
}
