#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string ans = "cdefgabC";
	string r_ans = "Cbagfedc";
	string temp = "";
	
	for(int i = 0;i < 8;i++){
		int num;
		cin >> num;
		temp += ans[num-1];
	}
	if(ans == temp) cout << "ascending";
	else if(r_ans == temp) cout << "descending";
	else cout << "mixed";
	return 0;
}
