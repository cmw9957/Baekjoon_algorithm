#include<iostream>
#include<algorithm>
using namespace std;
#define N 9
#define MAX 100
int sum;
void func(int *arr){
	for(int i = 0;i < N - 1;i++){
		for(int j = i + 1;j < N;j++){
			if(sum - (arr[i] + arr[j]) == MAX){
				arr[i] = -1;
				arr[j] = -1;
				return ;
			}
		}
	}
}

int main(){
	int arr[N];
	for(int i = 0;i < N;i++){
		cin >> arr[i];
		sum += arr[i];
	}
	func(arr);
	sort(arr, arr+N);
	for(int i = 2;i < N;i++)
		cout << arr[i] << '\n';
}
