#include<bits/stdc++.h>
using namespace std;

int F[1005][1005], n , v, A[1005], C[1005];

int qhd(){
	int i , j;
	memset(F,0,sizeof(F));
	for(i = 1; i <= n; i++){
		for(j = 1; j <= v; j++){
			F[i][j] = F[i-1][j];
			if (j >= A[i] && F[i-1][j-A[i]] + C[i] > F[i][j])
				F[i][j] = F[i-1][j-A[i]] + C[i];
		}
	}
	return F[n][v];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> v;
		for(int i = 1; i <= n; i++)	cin >> A[i];
		for(int i = 1; i <= n; i++)	cin >> C[i];
		
		cout << qhd() << endl;
	}
}
