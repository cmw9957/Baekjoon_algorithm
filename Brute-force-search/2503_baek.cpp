#include<bits/stdc++.h>
using namespace std;

bool digit[1000];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	memset(digit, true, sizeof(digit));
	for(int i = 123;i <= 999;i++){
		string temp = to_string(i);
		if(temp[0] == temp[1] || temp[0] == temp[2] || temp[1] == temp[2])
			digit[i] = false;
		if(temp[0]-'0' == 0 || temp[1]-'0' == 0 || temp[2]-'0' == 0)
			digit[i] = false;
	}
	
	while(n--){
		int num, s, b;
		cin >> num >> s >> b;
		for(int i = 123;i <=999;i++){
			int s_cnt = 0;
			int b_cnt = 0;
			if(digit[i]){
				string first = to_string(num);
				string second = to_string(i);
				for(int j = 0;j < 3;j++){
					for(int k = 0;k < 3;k++){
						if(j == k && first[j] == second[k])
							s_cnt++;
						else if(j != k && first[j] == second[k])
							b_cnt++;
					}
				}
				if(s != s_cnt || b != b_cnt)
					digit[i] = false;
			}
		}
	}
	int ans = 0;
	for(int i = 123;i <= 999;i++){
		if(digit[i])
			ans++;
	}
	cout << ans;
	return 0;
}
