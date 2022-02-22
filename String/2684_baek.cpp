#include<bits/stdc++.h>
using namespace std;

int sequence[8];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int p;
	cin >> p;
	
	while(p--){
		string coin;
		cin >> coin;
		
		for(int i = 0;i < 38;i++){
			string temp = coin.substr(i, 3);
			
			if(temp == "TTT")
				sequence[0]++;
			else if(temp == "TTH")
				sequence[1]++;
			else if(temp == "THT")
				sequence[2]++;
			else if(temp == "THH")
				sequence[3]++;
			else if(temp == "HTT")
				sequence[4]++;
			else if(temp == "HTH")
				sequence[5]++;
			else if(temp == "HHT")
				sequence[6]++;
			else if(temp == "HHH")
				sequence[7]++;
		}
		
		for(int i = 0;i < 8;i++)
			cout << sequence[i] << ' ';
		cout << '\n';
		fill(sequence, sequence + 8, 0);
	}
	return 0;
}
