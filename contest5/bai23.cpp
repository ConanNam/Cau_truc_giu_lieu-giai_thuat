#include<bits/stdc++.h>
using namespace std;
int a[1005], c[1005];

int qhd(int a[], int n){
	int count_max = 0;
	for(int i = 1; i <= n; i++){
		c[i] = 0;
		for(int j = 0; j < i; j++){
			if (a[j] <= a[i]){
				c[i] = max(c[i],c[j] + 1);
			}
		}
		count_max = max(count_max, c[i]);
	}
	int rs = n - count_max;
	return rs;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1 ; i <= n; i++)	cin >> a[i];
		cout << qhd(a,n) << endl;
	}
}
