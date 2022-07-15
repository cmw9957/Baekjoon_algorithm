#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

map<unsigned int, int> vis;

int main(void)
{
	SET
	
	int n;
	cin >> n;
	
	priority_queue<unsigned int, vector<unsigned int>, greater<unsigned int> > q;
	
	for(int i = 0;i < n;i++){
		unsigned int num;
		cin >> num;
		
		if(!vis.count(num)){
			vis[num] = 1;
			q.push(num);
		}
	}
	
	unsigned int idx = 1;
	while(!q.empty()){
		unsigned int cur = q.top();
		q.pop();
		if(cur != idx) break;
		idx++;
	}
	
	cout << idx;
	return 0;
}
