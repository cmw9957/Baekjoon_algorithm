#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, w, h;
	int len;
	
	cin >> n >> w >> h;
	
	int cross = (int)sqrt(pow(w, 2) + pow(h, 2));
	
	while(n--){
		cin >> len;
		if(len <= w || len <= h || len <= cross)
			cout << "DA" << '\n';
		else
			cout << "NE" << '\n';
	}
	return 0;
}
