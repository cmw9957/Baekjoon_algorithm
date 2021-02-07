#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i < n;i++)
		cin >> arr[i];
	cin >> m;
	sort(arr.begin(), arr.end());
	for(int i = 0;i < m;i++){
		int num;
		cin >> num;
		//upper_bound가 해당 값의 주소 +1 인줄 알아서 삽질했다. 
		cout << upper_bound(arr.begin(), arr.end(), num) - lower_bound(arr.begin(), arr.end(), num) << ' ';
	}
	return 0;
}
