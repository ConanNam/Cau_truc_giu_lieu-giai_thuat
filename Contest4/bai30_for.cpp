#include<bits/stdc++.h>
using namespace std;
const long P = 10e9+7;
int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long long f[n];
		f[0] = 0;
		f[1] = 1;
		for(long i = 2; i <= n; i++){
			f[i] = ((f[i-1] % P) + (f[i-2] % P)) % P;
		}
		cout << f[n] << endl;
	}
}
