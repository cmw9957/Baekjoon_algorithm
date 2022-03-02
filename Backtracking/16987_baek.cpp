#include<bits/stdc++.h>
using namespace std;
int n;
int dura[10], weight[10];
int ans = 0;
int cnt = 0;

void func(int x){
	if(x == n){	//�� ������ ����� ������ ��� 
		ans = max(ans, cnt);
		return ;
	}
	
	if(dura[x] <= 0 || cnt == n - 1){	//�տ� �� ����� �����ų�, �� ��Ʈ���� ��� 
		func(x + 1);
		return ;
	}
	
	for(int i = 0;i < n;i++){
		if(x == i || dura[i] <= 0) continue;	//�տ� �� ����̰ų� ���� ����� ��� 
		dura[x] -= weight[i];
		dura[i] -= weight[x];
		if(dura[x] <= 0) cnt++;
		if(dura[i] <= 0) cnt++;
		func(x + 1);
		if(dura[x] <= 0) cnt--;
		if(dura[i] <= 0) cnt--;
		dura[x] += weight[i];
		dura[i] += weight[x];
	}
	return ;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	
	for(int i = 0;i < n;i++)
		cin >> dura[i] >> weight[i];
	
	func(0);
	cout << ans;
	return 0;
}
