#include<bits/stdc++.h>
using namespace std;

int func(int x){
	if(x == 0) return 1;
	return x * func(x - 1);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int num;
	cin >> num;
	cout << func(num);
	
	return 0;
}
