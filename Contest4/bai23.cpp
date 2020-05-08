#include<bits/stdc++.h>
using namespace std;

int caculated(long long n, long long k){
	if (k % 2 == 1) return 1;
	long long x = pow(2,n-1);
	if (k == x) return n;
	if (k < x)
		return caculated(n-1,k);
	return caculated(n-1,k-x);
}


int main(){
	int t;
	cin >> t;
	while(t--){
		long long n , k;
		cin >> n >> k;
		cout << caculated(n, k) << endl;
	}
}
