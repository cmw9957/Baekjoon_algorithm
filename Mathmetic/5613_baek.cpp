#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	deque<int> num;
	deque<string> op;
	
	while(1){
		string str;
		cin >> str;
		
		if(isdigit(str[0]))
			num.push_back(stoi(str));
		else{
			op.push_back(str);
			if(str == "=") break;
		}
	}
	
	while(1){
		string oper = op.front(); op.pop_front();
		
		if(oper == "="){
			cout << num.front();
			break;
		} else {
			int result = 0;
			int num1 = num.front(); num.pop_front();
			int num2 = num.front(); num.pop_front();
			if(oper == "+")
				result = num1 + num2;
			else if(oper == "-")
				result = num1 - num2;
			else if(oper == "*")
				result = num1 * num2;
			else if(oper == "/")
				result = num1 / num2;
			
			num.push_front(result);
		}
	}
	return 0;
}
