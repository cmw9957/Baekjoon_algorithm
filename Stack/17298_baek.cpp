#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main(void)
{
	SET
	
	int n;
	cin >> n;
	
	stack<int> s;
	while(n--){
		int num;
		cin >> num;
		s.push(num);
	}
	
	int size = s.size();
	stack<int> as, ans;
	
	for(int i = 0;i < size;i++){
		if(as.empty()){
			as.push(s.top());
			s.pop();
			ans.push(-1);
		}
		else{
			if(s.top() >= as.top()){
				while(1){
					if(as.empty() || (s.top() < as.top())) break;
					as.pop();
				}
				if(as.empty())
					ans.push(-1);
				else
					ans.push(as.top());
				
				as.push(s.top());
				s.pop();
			}
			else{
				ans.push(as.top());
				as.push(s.top());
				s.pop();
			}
		}
	}
	
	while(!ans.empty()){
		cout << ans.top() << ' ';
		ans.pop();
	}
	return 0;
}
