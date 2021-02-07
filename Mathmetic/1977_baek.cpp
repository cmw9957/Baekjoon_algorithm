#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n, m, a;
	cin >> m >> n;
	int sum = 0, min = 0, i = 1;
	while((a = i*i) <= n){
		if(a >= m){
			sum += a;
			if(min == 0) min = a;
		}
		i++;
	}
	if(sum == 0) cout << -1;
	else cout << sum << '\n' << min;
}
