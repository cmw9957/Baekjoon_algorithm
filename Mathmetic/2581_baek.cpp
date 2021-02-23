#include<bits/stdc++.h>
using namespace std;
int m, n;

bool is_prime(int a){
	if(a == 1) return false;
	for(int i = 2;i < a;i++)
		if(!(a%i)) return false;
	return true;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> m >> n;
	int sum = 0, min_num = 0x7f7f7f7f;
	for(int i = m;i <= n;i++){
		if(is_prime(i)){
			sum += i;
			min_num = min(min_num, i);
		}
	}
	if(!sum)
		cout << -1;
	else
		cout << sum << '\n' << min_num;
	return 0;
}
