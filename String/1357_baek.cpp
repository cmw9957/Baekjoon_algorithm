#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n1, n2, ans;
	string num1, num2, total_num;
	cin >> num1 >> num2;
	
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	
	n1 = stoi(num1); n2 = stoi(num2);
	total_num = to_string(n1 + n2);
	reverse(total_num.begin(), total_num.end());
	ans = stoi(total_num);
	cout << ans;
	return 0;
}
