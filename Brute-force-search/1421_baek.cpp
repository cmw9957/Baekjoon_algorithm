#include<bits/stdc++.h>
using namespace std;

vector<int> tree;

bool cmp(int a, int b){
	return a > b;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, c, w;
	
	cin >> n >> c >> w;
	
	for(int i = 0;i < n;i++){
		int len;
		cin >> len;
		tree.push_back(len);
	}
	
	sort(tree.begin(), tree.end(), cmp);
	
	int max_len = tree[0];
	int tree_size = tree.size();
	long long ans = 0;
	
	for(int i = 1;i <= max_len;i++){
		long long sum = 0;
		
		for(int j = 0;j < tree_size;j++){
			
			if(tree[j] >= i){
				int cnt = 0;	//잘린 나무의 개수 
				int cost = 0;	//자른 횟수 
				cnt = tree[j] / i;
				
				if(tree[j] % i == 0)
					cost = tree[j] / i - 1;
				else
					cost = tree[j] / i;
				
				long long temp = cnt * w * i - cost * c;
				
				//아예 안자르는 경우도 생각해야한다. 
				if(temp > 0)
					sum += temp;
			}
		}
		
		ans = max(ans, sum);
	}
	cout << ans;
	return 0;
}
