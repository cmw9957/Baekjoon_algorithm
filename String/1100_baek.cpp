#include<bits/stdc++.h>
using namespace std;

string box[10];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i = 0;i < 8;i++)
		cin >> box[i];
	
	int cnt = 0 ;
	for(int i = 0;i < 8;i++){
		for(int j = 0;j < 8;j++){
			if(((i + 1) % 2 != 0) && ((j + 1) % 2 != 0) && (box[i][j] == 'F')) cnt++;
			else if( ((i + 1) % 2 == 0) && ((j + 1) % 2 == 0) && (box[i][j] == 'F')) cnt++;
		}
	}
	cout << cnt;
	return 0;
}
