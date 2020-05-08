#include<bits/stdc++.h>
using namespace std;

int n, k, A[100][100];

long long int gt(int n){
	long long int t = 1;
	for(int i = 2; i <= n; i++)
		t *= i;
	return t;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0 ; i < n; i++){
			for(int j = 0 ; j < k; j++){
				cin >> A[i][j];
			}
		}
		cout << gt(n + k - 2) / (gt(n - 1) * gt(n + k - 2 - n + 1)) << endl;
	}
}
