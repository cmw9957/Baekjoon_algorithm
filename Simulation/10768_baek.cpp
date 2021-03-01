#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int month, day;
	cin >> month >> day;
	if(month < 2) cout << "Before";
	else{
		if(month == 2 && day == 18) cout << "Special";
		else if(month == 2 && day < 18) cout << "Before";
		else if(month != 2 || month == 2 && day > 18) cout << "After";
	}
	return 0;
}
