#include<bits/stdc++.h>
using namespace std;

int people[1005];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for(int i = 0;i < n;i++)
		cin >> people[i];
	
	sort(people, people + n);
	
	int sum = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= i;j++){
			sum += people[j];
		}
	}
	
	cout << sum;
	return 0;
}
