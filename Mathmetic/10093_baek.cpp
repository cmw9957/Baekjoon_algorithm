#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long long a, b;
	cin >> a >> b;
	if(a == b){
		cout << 0;
		return 0;
	}
	if(a > b)
		swap(a, b);
	cout << b - a - 1 << '\n';		//문제를 잘보자. 
	while(1){
		a++;
		if(a == b) return 0;
		cout << a << ' ';
	}
}
