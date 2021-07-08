#include<bits/stdc++.h>
using namespace std;

int is_fin(string a, string b){
	if(a == "END" && a == b)
		return 1;
	return 0;
}

void func(int a[], string b, int t){
	int len = b.length();
	for(int i = 0;i < len;i++){
		if(t)
			a[b[i]-'a']++;
		else
			a[b[i]-'a']--;
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string first, second;
	
	for(int i = 1;;i++){
		bool is_right = true;
		int alpha[26] = {0};
		cin >> first >> second;
		
		if(is_fin(first, second))
			break;
			
		func(alpha, first, 1);
		func(alpha, second, 0);
		
		for(int j = 0;j < 26;j++)
			if(alpha[j] < 0 || alpha[j] > 0){
				is_right = false;
				break;
			}
		
		cout << "Case " << i << ": ";
		if(is_right)
			cout << "same" << '\n';
		else
			cout << "different" << '\n';
	}
	
	return 0;
}
