#include<bits/stdc++.h>
using namespace std;
int arr1[55];
int arr2[55];

bool cmp(int a, int b){
	return a > b;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> arr1[i];
	for(int i = 0;i < n;i++)
		cin >> arr2[i];
	sort(arr1, arr1+n);
	sort(arr2, arr2+n, cmp);
	int sum = 0;
	for(int i = 0;i < n;i++)
		sum += arr1[i]*arr2[i];
	cout << sum;
	return 0;
}
