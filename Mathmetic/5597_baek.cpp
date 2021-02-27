#include<bits/stdc++.h>
using namespace std;
int student[30];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i = 0;i < 28;i++){
		int submit;
		cin >> submit;
		student[submit-1] = 1;
	}
	for(int i = 0;i < 30;i++)
		if(!student[i]) cout << i + 1 << '\n';
	
	return 0;
}
