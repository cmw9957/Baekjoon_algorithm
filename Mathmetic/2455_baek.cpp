#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int max_people = 0, total_people = 0;
	int get_in, get_out;
	for(int i = 0;i < 4;i++){
		cin >> get_out >> get_in;
		total_people -= get_out;
		total_people += get_in;
		max_people = max(max_people, total_people);
	}
	cout << max_people;
	return 0;
}
