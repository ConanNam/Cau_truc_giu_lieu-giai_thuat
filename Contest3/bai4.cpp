#include<bits/stdc++.h>
using namespace std;

void solution(int a[], int n){
	sort(a , a + n);
	long long A = 0 , B = 0;
	for(int i =  0; i < n; i++){
		if (i % 2){
			A = A * 10 + a[i];
		} else{
			B = B * 10 + a[i];
		}
	}
	cout << A + B << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
		}
		solution(a,n);
	}
}
