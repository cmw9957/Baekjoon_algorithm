#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, t, n;
	cin >> a >> t >> n;
	
	int idx = 0;
	int z_cnt = 0, o_cnt = 0;
	int w = 2;
	while(1){
		for(int i = 0;i < 4;i++){
			if(!(i%2))
				z_cnt++;
			else
				o_cnt++;
			
			if(n && o_cnt == t){
				cout << idx;
				return 0;
			}
			else if(!n && z_cnt == t){
				cout << idx;
				return 0;
			}
			
			idx++;
			if(idx >= a) idx %= a;
		}
		
		for(int i = 0;i < w*2;i++){
			if(i < w)
				z_cnt++;
			else
				o_cnt++;
			
			if(n && o_cnt == t){
				cout << idx;
				return 0;
			}
			else if(!n && z_cnt == t){
				cout << idx;
				return 0;
			}
			
			idx++;
			if(idx >= a) idx %= a;
		}
		w++;
	}
	return 0;
}
