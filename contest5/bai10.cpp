#include<bits/stdc++.h>
using namespace std;

int a[1005][1005], c[1005][1005], n , m;

int qhd(){
	int i , j , rs = 0;
	memset(c,0,sizeof(c));
	c[1][1] = a[1][1];
	for(i =1; i <= m ; i++)	c[i][1] = c[i-1][1] + a[i][1];
	for(i = 1; i <= n; i++)	c[1][i] = c[1][i-1] + a[1][i];
	
	for(i = 2; i <= m; i++){
		for(j = 2; j <= n; j++){
			c[i][j] = min(c[i-1][j],min(c[i][j-1],c[i-1][j-1])) + a[i][j];

		}
	}
	return c[m][n];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> m >> n;
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++)
				cin >> a[i][j];
		}
		
		cout << qhd() << endl;
	}
}
