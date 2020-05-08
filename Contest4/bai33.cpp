#include<bits/stdc++.h>
using namespace std;

const long P = 1e9+7;


long long Inv(long long n){
	long long r = 0;
	while(n > 0){
		int temp = n % 10;
		r = r * 10 + temp;
		n /= 10;
	}
	return r;
}

/*long long int powM(long long n , long long r){
	long long int  rs = 1;
	n = n % P; // Neu n lon hon P hoac bang P;
	if (n == 0) return 0; // Neu n chia het cho p;
	if (n == 1) return 1;
	while(r > 0){
		if (r & 1)
			rs = (rs % P * n % P) % P;
		r = r / 2;
		n = (n * n) % P;
	}
	
	return rs;
}
*/

long long powM(long long n, long long  k){
	if (k == 0) return 1;
	long long x = powM(n,k/2) % P;
	if (k % 2 == 0){
		return (x * x) % P;
	} else {
		return ((x * x) % P * n) % P;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long r = Inv(n);
		cout << powM(n,r) << endl;
	}
}
