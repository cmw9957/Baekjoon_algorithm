#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--){
		string formula, temp = "";
		getline(cin, formula);
		if(formula == "P=NP"){
			cout << "skipped" << '\n';
			continue;
		}
		int len = formula.length(), sum = 0;
		for(int i = 0;i < len;i++){
			if(isdigit(formula[i])){
				temp += formula[i];
			}
			else{
				sum += stoi(temp);
				temp = "";
			}
		}
		sum += stoi(temp);
		cout << sum << '\n';
	}
	return 0;
}
