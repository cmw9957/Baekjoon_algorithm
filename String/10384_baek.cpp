#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	cin.ignore();
	
	for(int k = 1;k <= n;k++){
		bool re = false;
		int alpha[26] = {0,};
		string str;
		getline(cin, str);
		
		for(int i = 0;i < str.length();i++){
			str[i] = tolower(str[i]);
			if(isalpha(str[i]))
				alpha[str[i] - 'a']++;
		}
		
		int check = *min_element(alpha, alpha + 26);
		cout << "Case " << k << ": ";
		for(int i = 0;i < 26;i++){
			if(!alpha[i]){
				cout << "Not a pangram" << '\n';
				re = true;
				break;
			}
		}
		if(re) continue;
		
		if(check == 1)
			cout << "Pangram!" << '\n';
		else if(check == 2)
			cout << "Double pangram!!" << '\n';
		else
			cout << "Triple pangram!!!" << '\n';
	}
	
	return 0;
}
