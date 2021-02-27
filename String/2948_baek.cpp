#include<bits/stdc++.h>
using namespace std;
int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string week[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int month, day, total_day = 0;
	cin >> day >> month;
	for(int i = 0;i < month-1;i++)
		total_day += days[i];
	total_day += day;
	int ans = total_day % 7;
	cout << week[ans];
	return 0;
}
