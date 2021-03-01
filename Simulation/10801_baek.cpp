#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[10], b[10];
	int a_score = 0, b_score = 0;
	for(int i = 0;i < 20;i++){
		int score;
		cin >> score;
		if(i < 10) a[i] = score;
		else	   b[i%10] = score;
	}
	for(int i = 0;i < 10;i++){
		if(a[i] > b[i]) a_score++;
		else if(a[i] < b[i]) b_score++;
	}
	if(a_score > b_score) cout << "A" << '\n';
	else if(a_score < b_score) cout << "B" << '\n';
	else	cout << "D" << '\n';
	return 0;
}
