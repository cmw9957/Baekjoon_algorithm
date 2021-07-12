#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[10], b[10];
	
	for(int i = 0;i < 20;i++){
		if(i < 10)
			cin >> a[i];
		else
			cin >> b[i-10];
	}
	
	int a_score = 0, b_score = 0;
	for(int i = 0;i < 10;i++){
		if(a[i] > b[i])
			a_score += 3;
		else if(a[i] < b[i])
			b_score += 3;
		else{
			a_score++;
			b_score++;
		}
	}
	cout << a_score << ' ' << b_score << '\n';
	if(a_score > b_score)
		cout << 'A' << '\n';
	else if(a_score < b_score)
		cout << 'B' << '\n';
	else{
		for(int i = 9;i >= 0;i--){
			if(a[i] > b[i]){
				cout << 'A' << '\n';
				return 0;
			}
			else if(a[i] < b[i]){
				cout << 'B' << '\n';
				return 0;
			}
		}
		cout << 'D' << '\n';
	}
	return 0;
}
