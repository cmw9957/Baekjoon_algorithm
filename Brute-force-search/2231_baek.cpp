#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	for(int i = 1;;i++){
		int temp = i;
		int total = 0;
		while(temp){
			total += temp % 10;
			temp /= 10;
		}
		
		if(total + i == n){
			cout << i;
			break;
		}
		else if(i >= n){
			cout << 0;
			break;
		}
	}
	return 0;
}
