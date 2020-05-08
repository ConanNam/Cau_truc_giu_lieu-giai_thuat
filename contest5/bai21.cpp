#include<bits/stdc++.h>
using namespace std;

int F[1005], a[1005], n , k;
long M = 1e9+7;

int qhd(){
	memset(F,0,sizeof(F));
	F[0] = 1; 
	int i , j;
	for(i = 1; i <= k; i++){
		for(j = 0 ; j < n; j++){
			if (i >= a[j])
				F[i] = (F[i] + F[i-a[j]]) % M;
		}
	}
	return F[k];
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i < n; i++)	cin >> a[i];
		cout << qhd() << endl;
	}
}
