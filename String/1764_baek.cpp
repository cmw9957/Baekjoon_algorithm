#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	
	vector<string> v1;
	vector<string> v2;
	
	string name;
	for(int i = 0;i < n;i++){
		cin >> name;
		v1.push_back(name);
	}
	for(int i = 0;i < m;i++){
		cin >> name;
		v2.push_back(name);
	}
	
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	
	vector<string> ans;
	
	for(int i = 0;i < v2.size();i++)
		if(binary_search(v1.begin(), v1.end(), v2[i]))
			ans.push_back(v2[i]);
	
	sort(ans.begin(), ans.end());
	
	cout << ans.size() << '\n';
	for(int i = 0;i < ans.size();i++)
		cout << ans[i] << '\n';
	return 0;
}
