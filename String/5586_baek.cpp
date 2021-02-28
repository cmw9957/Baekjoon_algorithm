#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int JOI_idx = 0, IOI_idx = 0;
	int JOI_cnt = 0, IOI_cnt = 0;
	while(1){
		int temp;
		temp = str.find("JOI", JOI_idx);
		if(temp != string::npos){
			JOI_idx = temp + 1;
			JOI_cnt++;
		}
		else break;
	}
	while(1){
		int temp;
		temp = str.find("IOI", IOI_idx);
		if(temp != string::npos){
			IOI_idx = temp + 1;
			IOI_cnt++;
		}
		else break;
	}
	cout << JOI_cnt << '\n' << IOI_cnt;
	return 0;
}
