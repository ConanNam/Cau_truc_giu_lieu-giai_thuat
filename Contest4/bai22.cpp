#include<bits/stdc++.h>
using namespace std;

void findBinary(int a[], int l, int h, int k){
	int mid;
	if (l > h){
		cout <<"NO" <<endl;
		return;
	}else{
		mid = (l + h) /2;
		if (k == a[mid]){
			cout << mid+1 << endl;
			return;
		}else{
			if (k < a[mid]){
				findBinary(a,l,mid-1,k);
			}else{
				findBinary(a,mid+1,h,k);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0 ; i < n; i++)	cin >> a[i];
		findBinary(a,0,n,k);
	}
}
