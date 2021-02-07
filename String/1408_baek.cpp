#include<cstdio>
using namespace std;

int main(){
	int h, m, s, ah, am, as;
	scanf("%2d:%2d:%2d", &h, &m, &s);
	scanf("%2d:%2d:%2d", &ah, &am, &as);
	as = as - s;
	am = am - m;
	ah = ah - h;
	if(as < 0){
		as += 60;
		--am;
	}
	if(am < 0){
		am += 60;
		--ah;
	}
	if(ah < 0)
		ah = 24 + ah;
	
	printf("%02d:%02d:%02d", ah, am, as);
}
