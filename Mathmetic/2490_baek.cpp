#include<bits/stdc++.h>
using namespace std;

int ans[2];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a;
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 4;j++){
			cin >> a;
			if(a)
				ans[1]++;
			else
				ans[0]++;
		}
		if(ans[1] == 4)
			cout << 'E' << '\n';
		else if(ans[1] == 1)
			cout << 'C' << '\n';
		else if(ans[1] == 2)
			cout << 'B' << '\n';
		else if(ans[1] == 3)
			cout << 'A' << '\n';
		else if(ans[0] == 4)
			cout << 'D' << '\n';
		ans[0] = 0; ans[1] = 0;
	}
}
