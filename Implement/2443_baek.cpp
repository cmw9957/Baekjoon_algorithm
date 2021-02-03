#include<iostream>
using namespace std;

int main(){
	int n;
	int cnt = 5;
	cin >> n;
	for(int i = n;i > 0;i--){
		for(int j = n - i;j > 0;j--)
			cout << ' ';
		for(int j = 0;j < 2*i - 1;j++)
			cout << '*';
		cout << '\n';
	}
}
