#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int min_burger = 0x7f7f7f7f, min_drink = 0x7f7f7f7f;
	for(int i = 0;i < 3;i++){
		int burger;
		cin >> burger;
		min_burger = min(min_burger, burger);
	}
	for(int i = 0;i < 2;i++){
		int drink;
		cin >> drink;
		min_drink = min(min_drink, drink);
	}
	cout << min_burger + min_drink - 50;
	return 0;
}
