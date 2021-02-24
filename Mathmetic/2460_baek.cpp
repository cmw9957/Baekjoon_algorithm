#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int in, out;
	int total_people = 0, max_people = 0;
	for(int i = 0;i < 10;i++){
		cin >> out >> in;
		total_people -= out;
		total_people += in;
		max_people = max(max_people, total_people);
	}
	cout << max_people;
	return 0;
}
