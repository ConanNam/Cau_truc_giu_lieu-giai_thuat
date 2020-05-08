#include<bits/stdc++.h>
using namespace std;

int n, A[10];

void Try(int n){
	if (n == 1) return;
	for(int i = 1; i < n; i++)
		A[i] += A[i+1];
	cout << "[";
	for(int i = 1; i < n - 1; i++){
		cout << A[i] << " ";
	}
	cout << A[n-1] << "]" << endl;
	Try(n-1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> A[i];
		cout <<"["; 
		for(int i = 1; i < n; i++){
			cout << A[i] << " ";
		}
		cout << A[n] << "]" << endl;
		Try(n);
	}
}
