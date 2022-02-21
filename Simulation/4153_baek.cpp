#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
	return a > b;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1){
		vector<int> v;
		for(int i = 0;i < 3;i++){
			int num;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end(), compare);
		if(v[0] == 0 && v[1] == 0 && v[2] == 0) break;
		
		if(pow(v[0], 2) == pow(v[1], 2) + pow(v[2], 2))
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';
	}
	return 0;
}
