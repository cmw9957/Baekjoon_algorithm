#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--){
		double num;
		string unit;
		cin >> num >> unit;
		
		if(unit == "kg")
			printf("%.4lf lb\n", num * 2.2046);
		else if(unit == "lb")
			printf("%.4lf kg\n", num * 0.4536);
		else if(unit == "l")
			printf("%.4lf g\n", num * 0.2642);
		else
			printf("%.4lf l\n", num * 3.7854);
	}
	
	return 0;
}
