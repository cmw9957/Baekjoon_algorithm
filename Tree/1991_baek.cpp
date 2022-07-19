#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int l[30];
int r[30];

void preFunc(int cur){
	cout << (char)(cur+'A'-1);
	if(l[cur] != 0) preFunc(l[cur]);
	if(r[cur] != 0) preFunc(r[cur]);
}

void inFunc(int cur){
	if(l[cur] != 0) inFunc(l[cur]);
	cout << (char)(cur+'A'-1);
	if(r[cur] != 0) inFunc(r[cur]);
}

void postFunc(int cur){
	if(l[cur] != 0) postFunc(l[cur]);
	if(r[cur] != 0) postFunc(r[cur]);
	cout << (char)(cur+'A'-1);
}

int main(void)
{
	SET
	
	int n;
	cin >> n;
	
	for(int i = 0;i < n;i++){
		char root, left, right;
		cin >> root >> left >> right;
		
		if(left != '.')
			l[root-'A'+1] = left-'A'+1;
		if(right != '.')
			r[root-'A'+1] = right-'A'+1;
	}
	
	preFunc(1);
	cout << '\n';
	inFunc(1);
	cout << '\n';
	postFunc(1);
	return 0;
}
