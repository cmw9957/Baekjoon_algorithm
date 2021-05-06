#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		bool check = false;
		vector<char> v;
		int alpha[26] = {0};
		string str;
		getline(cin, str);
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		
		for(int i = 0;i < str.length();i++){
			if(isalpha(str[i]))
				alpha[str[i] - 'a']++;
		}
		for(int i = 0;i < 26;i++){
			if(!alpha[i]){
				check = true;
				v.push_back('a' + i);
			}
		}
		if(check){
			cout << "missing" << ' ';
			for(int i = 0;i < v.size();i++)
				cout << v[i];
			cout << '\n';
		}
		else{
			cout << "pangram" << '\n';
		}
		
	}
	return 0;
}
