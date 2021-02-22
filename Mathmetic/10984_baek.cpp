#include<bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int grade = 0, s_grade;
		double score = 0.0, s_score;
		for(int i = 0;i < n;i++){
			scanf("%d %lf", &s_grade, &s_score);
			grade += s_grade;
			score += s_grade * s_score;
		}
		score /= grade;
		printf("%d %.1lf\n", grade, score);
	}
	return 0;
}
