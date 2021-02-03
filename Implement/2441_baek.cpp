#include<iostream>
using namespace std;

int main(){
	int n;
	int cnt = 1;
	cin >> n;
	for(int i = 1;i <= n;i++){
		for(int j = n - i;j > 0;j--)
			cout << ' ';
		if(!(cnt%2)) cnt++;
		for(int j = 0;j < cnt;j++)
			cout << '*';
		cout << '\n';
		cnt++;
	}
}
