//에라토스테네스의 체 

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
bool arr[MAX];
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n;
	cin >> m >> n;
	for(int i = 2;i < n+1;i++)
		arr[i] = true;
	for(int i = 2;i < n+1;i++){
		if(arr[i]){
			if(pow(i, 2) > MAX) break;
			else{
				for(int j = pow(i, 2);j < n+1;){
					arr[j] = false;
					j = j + i;
				}
			}
		}
	}
	if(m == 1) m++;
	for(int i = m;i < n+1;i++)
		if(arr[i])
			cout << i << '\n';
	return 0;
}
