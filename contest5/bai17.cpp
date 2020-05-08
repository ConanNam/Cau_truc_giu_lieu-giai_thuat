#include<bits/stdc++.h>
using namespace std;

int a[1005];

int qhd_bitonic(int a[], int n){
	int msis[n], msds[n];
	int rs = INT_MIN;
	// tong day tang.
	
	for(int i = 0 ; i < n; i++){
		msds[i] = a[i];
		msis[i] = a[i];
	}
	
	// tong tang dan tu trai qua phai
	for(int i = 1; i < n; i++){
		for(int j = 0 ; j < i ; j++){
			if (a[j] < a[i] && msis[i] < msis[j] + a[i]){
				msis[i] = msis[j] + a[i];
			}
		}
	}
	
	// tong day giam tu phai qua trai
	
	for(int i = n - 2; i >= 0; i--){
		for(int j = n - 1; j > i; j--){
			if (a[j] < a[i] && msds[i] < msds[j] + a[i]){
				msds[i] = msds[j] + a[i];
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		if (rs < (msis[i] + msds[i]) - a[i]){
			rs = msds[i] + msis[i] - a[i];
		}
	}
	
	return rs;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++)	cin >> a[i];
		cout << qhd_bitonic(a,n) << endl;
	}
}
