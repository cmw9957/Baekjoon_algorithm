#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a;
	vector<long long> V;
	for(int i = 0;i < 7;i++){
		cin >> a;
		if(a%2)
			V.push_back(a);
	}
	if(V.empty()){
		cout << -1 << '\n';
		return 0;
	}
	long long sum = 0;
	sort(V.begin(), V.end());
	for(int i = 0;i < V.size();i++)
		sum += V[i];
	
	cout << sum << '\n' << V[0];
}
