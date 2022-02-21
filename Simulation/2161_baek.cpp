#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	deque<int> d;
	
	for(int i = 1;i <= n;i++)
		d.push_back(i);
	
	while(1){
		int top = d.front();
		d.pop_front();
		cout << top << ' ';
		if(d.empty()) break;
		int temp = d. front();
		d.pop_front();
		d.push_back(temp);
	}
	return 0;
}
