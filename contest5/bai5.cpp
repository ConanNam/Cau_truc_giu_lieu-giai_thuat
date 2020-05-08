#include<bits/stdc++.h>
using namespace std;

int M = 1e9+7;

long c[1005][1005];

void caculated(int n){
	int i , j;
	for(i = 0 ; i <= 1000; i++){
		for(j = 0 ; j <= i; j++){
			if (j == 0 || j == i)	c[i][j] = 1;
			else{
				c[i][j] = (c[i-1][j] % M + c[i-1][j-1] % M) % M;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		caculated(n);
		cout << c[n][k] << endl;
	}
}
