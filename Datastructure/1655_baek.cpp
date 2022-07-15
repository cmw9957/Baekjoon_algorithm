#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main(void)
{
	SET
	
	int n, num;
	cin >> n;
	
	priority_queue<int> left;
	priority_queue<int, vector<int>, greater<int>> right;
	
	while(n--){
		cin >> num;
		
		if(left.empty()){
			left.push(num);
		}
		else if(right.empty()){
			if(num < left.top()){
				right.push(left.top());
				left.pop();
				left.push(num);
			}
			else{
				right.push(num);
			}
		}
		else if(left.size() == right.size()){
			if(num <= right.top()){
				left.push(num);
			}
			else{
				left.push(right.top());
				right.pop();
				right.push(num);
			}
		}
		else if(left.size() > right.size()){
			if(num < left.top()){
				right.push(left.top());
				left.pop();
				left.push(num);
			}
			else{
				right.push(num);
			}
		}
		cout << left.top() << '\n';
	}
	return 0;
}
