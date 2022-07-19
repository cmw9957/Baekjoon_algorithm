#include<bits/stdc++.h>
#define SET ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int tree[10005];

//전위 순회는 루트-왼쪽-오른쪽, 후위 순회는 왼쪽-오른쪽-루트 
//merge와 비슷 
void postFunc(int start, int end){
	if(start >= end)
		return;
	if(start == end-1){
		cout << tree[start] << '\n';
		return;
	}
	
	int idx = start+1;
	while(idx < end){
		if(tree[start] < tree[idx]) break;
		idx++;
	}
	postFunc(start+1, idx);
	postFunc(idx, end);
	cout << tree[start] << '\n';
}

int main(void)
{
	SET
	
	int idx = 0;
	int node;
	
	while(cin >> node){
		tree[idx] = node;
		idx++;
	}
	postFunc(0, idx); 
	return 0;
}	
