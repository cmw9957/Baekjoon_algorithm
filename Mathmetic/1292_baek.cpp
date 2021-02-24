#include<iostream>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	int cnt = 0, sum = 0;
	cin >> a >> b;
	for(int i = 1;cnt < b;i++){
		for(int j = 0;j < i && cnt < b;j++){
			cnt++;
			if(cnt >= a) sum += i; 
		}
	}
	cout << sum;
	return 0;
}
