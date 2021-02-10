#include<bits/stdc++.h>
using namespace std;

int n;
string num;

void func(char c, int len){
	if(len == n){
		cout << num;
		exit(0);
	}
	num += c;
	for(int i = 1;i <= len/2;i++){
		string a = num.substr(len - i, i);		//해당 index에서 부터 주어진 길이만큼의 문자열 반환 
		string b = num.substr(len - i*2, i);
		if(a == b){
			num.erase(len-1);
			return ;
		}
	}
	for(int i = 1;i < 4;i++)
		func(i+'0', len+1);
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	
	return 0;
}
