#include<iostream>
int main(){
	int n; std::cin >> n;
	std::cout << !bool(n&(n - 1));
}
