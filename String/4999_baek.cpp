#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string my_voice, doctor;
	cin >> my_voice >> doctor;
	if(my_voice.length() >= doctor.length()) cout << "go";
	else									 cout << "no";
	return 0;
}
