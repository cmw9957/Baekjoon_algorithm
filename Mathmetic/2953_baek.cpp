#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int part[5];
	int max_grade = -1;
	for(int i = 0;i < 5;i++){
		int score = 0;
		for(int j = 0;j < 4;j++){
			int grade;
			cin >> grade;
			score += grade;
		}
		max_grade = max(max_grade, score);
		part[i] = score;
	}
	int winner = find(part, part+5, max_grade) - part + 1;
	cout << winner << ' ' << max_grade;
	return 0;
}
