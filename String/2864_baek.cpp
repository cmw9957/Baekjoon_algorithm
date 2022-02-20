#include<bits/stdc++.h>
using namespace std;

int func(string num, int op){
	int len = num.length();
	int ans;
	if(!op){
		for(int i = 0;i < len + 1;i++){
			if(num[i] == '6') num[i] = '5';
    	}
	} else {
		for(int i = 0;i < len + 1;i++){
			if(num[i] == '5') num[i] = '6';
    	}
	}
	
	return ans = stoi(num);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string f_num, l_num;
	cin >> f_num >> l_num;
	
	int min, max;
	
	min = func(f_num, 0) + func(l_num, 0);
	max = func(f_num, 1) + func(l_num, 1);
	
	cout << min << ' ' << max;
	return 0;
}
