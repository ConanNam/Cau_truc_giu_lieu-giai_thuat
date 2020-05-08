#include<bits/stdc++.h>
using namespace std;

int A[15], B[15][15], n;

void init(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		 cin >> A[i];
		 B[n][i] = A[i];
	}
}

void Try(int n){
	if (n == 1){
		return;
	}
	for(int i = 1; i < n; i++){
		A[i] += A[i+1];
		B[n-1][i] = A[i];
	}
	Try(n-1);
}

void rs(){
	cout << "[" << B[1][1] << "] ";
	int i, j;
	for(i = 2; i <= n; i++){
		cout << "[";
		for(j = 1; j < i; j++){
			cout << B[i][j] << " ";
		}
		cout << B[i][j]<<"] ";
		j = 1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		Try(n);
		rs();
		cout << endl;
	}
}
