#include<bits/stdc++.h>
using namespace std;

int F[10005], n , k;
long M = 1e9+7;
long long qhd(){
	F[0] = 1;
	F[1] = 1;
	for(int i = 2; i <= n; i++){
		F[i] = 0;
		for(int j = 1; j <= i && j <= k; j++)
			F[i] = (F[i] + F[i-j]) % M;
	}
	return F[n];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << qhd() << endl;
	}
}
