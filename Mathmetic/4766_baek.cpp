#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	float tp;
	float bef = 0;
	bool is_first = false;
	
	while(1){
		cin >> tp;
		if(tp == 999)
			break;
		float ans = tp - bef;
		bef = tp;
		if(is_first)
			printf("%.2f\n", ans);
		is_first = true;
	}
	return 0;
}
