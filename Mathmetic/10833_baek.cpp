#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int remain_apple = 0;
	int student, apple;
	for(int i = 0;i < n;i++){
		cin >> student >> apple;
		remain_apple += apple % student;
	}
	cout << remain_apple;
	return 0;
}
