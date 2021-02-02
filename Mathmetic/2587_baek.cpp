#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> V;
	int a, sum = 0;
	for(int i = 0;i < 5;i++){
		cin >> a;
		sum += a;
		V.push_back(a);
	}
	sum /= 5;
	sort(V.begin(), V.end());
	cout << sum << '\n' << V[2];
}
