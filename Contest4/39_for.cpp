#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n], b[n-1];
		for(long long i = 0 ; i < n; i++)	cin >> a[i];
		for(long long j = 0 ; j < n-1; j++)	cin >> b[j];
		long long rs = 0;
		for(long long i = 0 ; i < n- 1; i++){
			if (a[i] != b[i]){
				rs = i + 1;
				break;
			}
		}
		if (rs == 0 ) cout << n << endl;
		else{
			cout << rs << endl;
		}
	}
}
