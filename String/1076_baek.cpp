#include<bits/stdc++.h>
using namespace std;

string color[10] = {"black", "brown", "red", "orange", "yellow",
					"green", "blue", "violet", "grey", "white"};

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long ans = 0;
	string num = "";
	for(int i = 0;i < 3;i++){
		string clr = "";
		string value = "";
		
		cin >> clr;
		
		for(int j = 0;j < 10;j++)
			if(color[j] == clr){
				value = to_string(j);
				break;
			}
			
		if(i==0||i==1)
			num += value;
		else
			ans = stoi(num) * pow(10, stoi(value));
	}
	cout << ans;
	return 0;
}
