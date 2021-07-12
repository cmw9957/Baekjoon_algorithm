#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	priority_queue<int> pq;
	while(n--){
		int num;
		cin >> num;
		
		if(!num && !pq.size()){
			cout << 0 << '\n';
			continue;
		}
		else if(!num){
			cout << pq.top() << '\n';
			pq.pop();
			continue;
		}
		
		pq.push(num);
	}
	return 0;
}
