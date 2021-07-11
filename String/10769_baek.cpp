#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	string happy = ":-)", sad = ":-(";
	
	getline(cin, str);
	
	int h_cnt = 0, s_cnt = 0;
	
	int idx = 0;
	while(str.find(happy, idx) != (int)string::npos){
		idx = str.find(happy, idx)+1;
		h_cnt++;
	}
	
	idx = 0;
	while(str.find(sad, idx) != (int)string::npos){
		idx = str.find(sad, idx)+1;
		s_cnt++;
	}
	
	if(h_cnt == 0 && s_cnt == 0)
		cout << "none";
	else if(h_cnt == s_cnt)
		cout << "unsure";
	else if(h_cnt > s_cnt)
		cout << "happy";
	else
		cout << "sad";
	return 0;
}
