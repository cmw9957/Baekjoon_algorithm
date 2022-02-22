#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1){
		int num;
		cin >> num;
		if(!num) break;
		
		cout << num << ' ';
		
		while(num / 10){
			int temp_num = 1;
			int temp = num;
			while(temp){
				temp_num *= temp % 10;
				temp /= 10;
			}
			cout << temp_num << ' ';
			num = temp_num;
		}
		cout << '\n';
	}
	
	return 0;
}
