#include<bits/stdc++.h>
using namespace std;
long a[1005];
long qhd(long a[], int n){
	long incl = a[0];
	long excl = 0;
	
	for(int i = 1; i < n; i++){
		long temp = incl;
		incl = max(incl,excl + a[i]);
		excl = temp;
	}
	return max(incl,excl);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++)	cin >> a[i];
		cout << qhd(a,n) << endl;
	}
}
