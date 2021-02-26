#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string str1, str2;
		cin >> str1 >> str2;
		int len = str1.length();
		cout << "Distances: ";
		for(int i = 0;i < len;i++){
			int dist;
			if(str1[i] <= str2[i])
				dist = str2[i] - str1[i];
			else
				dist = str2[i] + 26 - str1[i];
			cout << dist << ' ';
		}
		cout << '\n';
	}
	return 0;
}
