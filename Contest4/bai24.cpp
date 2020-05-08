#include<bits/stdc++.h>
using namespace std;
const long P = 123456789;

long long Cal(long long n){
	if (n == 1) return 2;
	
	long long x = Cal(n/2);
	if (n % 2 == 0)	return (x * x) % P;
	return (2 * x * x) % P;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << Cal(n-1) << endl;
	}
}
