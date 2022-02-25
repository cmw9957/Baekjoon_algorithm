#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b != 0){
		int temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	int g_num = 0;
	while(n--){
		int num;
		cin >> num;
		g_num = gcd(num, g_num);
	}
	
	for(int i = 1;i * 2 <= g_num;i++){
		if(!(g_num % i)) cout << i << '\n';
	}
	cout << g_num;
	return 0;
}
