#include<bits/stdc++.h>
using namespace std;

int quicksum(string a){
	int len = a.length();
	
	int total = 0;
	for(int i = 0;i < len;i++){
		if(a[i] == ' ')
			continue;
		else
			total += (a[i]-64)*(i+1);
	}
	return total;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1){
		string str;
		getline(cin, str);
		
		if(str == "#")
			break;
		cout << quicksum(str) << '\n';
	}
	return 0;
}
