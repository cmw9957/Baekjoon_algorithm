#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for(int i = 1;i <= n;i++){
		vector<int> v;
		for(int j = 0;j < 3;j++){
			int num;
			cin >> num;
			v.push_back(num);
		}
		
		sort(v.begin(), v.end());
		cout << "Scenario #" << i << ":\n";
		if(pow(v[2], 2) != pow(v[0], 2) + pow(v[1], 2))
			cout << "no" << "\n\n";
		else
			cout << "yes" << "\n\n";
			
	}
	
	
	return 0;
}
