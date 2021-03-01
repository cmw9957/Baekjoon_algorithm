#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int p1_score = 0, p2_score = 0;
		while(n--){
			char p1, p2;
			cin >> p1 >> p2;
			if(p1 != p2){
				if(p1 == 'R' && p2 == 'S' || p1 == 'S' && p2 == 'P' || p1 == 'P' && p2 == 'R')
					p1_score++;
				if(p2 == 'R' && p1 == 'S' || p2 == 'S' && p1 == 'P' || p2 == 'P' && p1 == 'R')
					p2_score++;
			}
		}
		if(p1_score != p2_score){
			if(p1_score > p2_score) cout << "Player 1" << '\n';
			else					cout << "Player 2" << '\n';
		}
		else
			cout << "TIE" << '\n';
	}
	return 0;
}
