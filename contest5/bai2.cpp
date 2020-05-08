#include<bits/stdc++.h>
using namespace std;

int a[1005], c[1005];

int day_con_max(int a[], int n){
	int i , j, kq = 1;
	for(i = 1; i <= n; i++){
		c[1] = 1;
		for(j = 0 ; j < i; j++){
			if (a[j] < a[i]){
				c[i] = max(c[i],c[j]+1);
				//cout << "C[" << i << "] = "<<c[i] << endl;
			}
			kq = max(kq,c[i]);
		}
	}
	return kq;
}

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)	cin >> a[i];
	cout << day_con_max(a,n) << endl;
}
