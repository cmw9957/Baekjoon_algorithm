#include<iostream>
using namespace std;
#define N 10001
bool ans[N];

int func(int n){
	int temp = n;
	int self_num = 0;
	while(temp){
		self_num += temp % 10;
		temp /= 10;
	}
	return n + self_num;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num;
	for(int i = 1;i < N;i++){
		num = func(i);
		if(num <= N)				//범위를 지정해주어야한다. 합한 결과가 범위를 벗어날지도 모르니까. 
			ans[num] = 1;
	}
	for(int i = 1;i < N;i++)
		if(!ans[i]) cout << i << '\n';
}
