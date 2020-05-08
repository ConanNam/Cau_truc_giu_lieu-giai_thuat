#include<bits/stdc++.h>
using namespace std;

int a[1005], c[1005], n;

int day_con_max(int a[], int n){
	int i , j, kq = 0;
	for(int k = 1; k <= n ; k++) c[k] = a[i];
	for(i = 1; i <= n; i++){
		for(j = 0 ; j < i; j++){
			if (a[j] < a[i]){
				c[i] = max(c[i],c[j]+a[i]);
			}
			kq = max(kq,c[i]);
		}
	}
	return kq;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++)	cin >> a[i];
		cout << day_con_max(a,n) << endl;
	}
}
