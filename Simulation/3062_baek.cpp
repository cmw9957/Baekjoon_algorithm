#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	
	while(t--){
		string num;
		cin >> num;
		
		int a = stoi(num);
		reverse(num.begin(), num.end());
		int b = stoi(num);
		
		int ans = a+b;
		string r_ans = to_string(ans);
		string temp = r_ans;
		
		reverse(temp.begin(), temp.end());
		
		if(r_ans == temp)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
	return 0;
}
