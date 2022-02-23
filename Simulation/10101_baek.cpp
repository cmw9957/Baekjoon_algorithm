#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int sum = 0;
	map<int, int> m;
	for(int i = 0;i < 3;i++){
		int num;
		cin >> num;
		sum += num;
		if(m.find(num) == m.end())
			m.insert({num, 0});
	}
	if(sum != 180)
		cout << "Error";
	else{
		if(m.size() == 3)
			cout << "Scalene";
		else if(m.size() == 2)
			cout << "Isosceles";
		else
			cout << "Equilateral";
	}
	return 0;
}
