#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	string flush;
	getline(cin, flush);
	for(int i = 0; i < n;i++){
		string str;
		getline(cin, str);
		
		string temp;
		for(int j = 0;j < str.length();j++){
			if(str[j] == ' '){
				reverse(temp.begin(), temp.end());
				cout << temp << ' ';
				temp.clear();
			}
			else{
				temp += str[j];
			}
		}
		reverse(temp.begin(), temp.end());
		cout << temp << '\n';
	}
	return 0;
}
