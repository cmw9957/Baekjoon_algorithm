#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int min_sum = 0, man_sum = 0;
	for(int i = 0;i < 8;i++){
		int score;
		cin >> score;
		if(i < 4) min_sum += score;
		else	  man_sum += score;
	}
	if(min_sum >= man_sum) cout << min_sum;
	else				   cout << man_sum;
	return 0;
}
