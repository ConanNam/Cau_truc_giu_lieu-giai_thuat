#include<bits/stdc++.h>
using namespace std;

long long find_i(long long i, long long n){
	if (n == 1) return 1;
	double a = log(n);
	double b = log(2);
	double c = a/b;
	long long mid = pow(2,(long long) c);
	
	if (i == mid) return n % 2;
	if (i <= mid) return find_i(i,n/2);
	else return find_i(i - mid, n/2);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n , l , r;
		cin >> n >> l >> r;
		long long count = 0;
		for(long long i = l ; i <= r; i++){
			if (find_i(i,n) == 1)
				count++;
		}
		cout << count << endl;
	}
}
