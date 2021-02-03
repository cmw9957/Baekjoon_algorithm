#include<iostream>
using namespace std;

int main(){
	int y_amount = 0, m_amount = 0;
	int n, a;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a;
		y_amount += 10*(a/30 + 1);
		m_amount += 15*(a/60 + 1);
	}
	if(y_amount == m_amount)
		cout << "Y M " << y_amount;
	else if(y_amount < m_amount)
		cout << "Y " << y_amount;
	else
		cout << "M " << m_amount;
}
