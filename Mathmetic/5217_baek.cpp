#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	
	while(t--){
		int num;
		bool chk = false;
		cin >> num;
		
		cout << "Pairs for " << num << ": ";
		for(int i = 1;;i++){
			int temp = num - i;
			if(i < temp && !chk){
				cout << i << ' ' << temp;
				chk = true;
			}
			else if(i < temp && chk)
				cout << ", " << i << ' ' << temp;
			
			else if(i >= temp)
				break;			
		}
		cout << '\n';
	}
	return 0;
}
