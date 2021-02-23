#include<bits/stdc++.h>
using namespace std;
int arr[105];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int score = 0, plus = 1;
	for(int i = 0;i < n;++i){
		cin >> arr[i];
		if(arr[i] && i != 0){
			if(arr[i-1] && arr[i]){
				++plus;
				score += plus;
			}
			else{
				plus = 1;
				score += 1;
			}
		}
	}
	if(arr[0]) score += 1;
	cout << score;
	return 0;
}
