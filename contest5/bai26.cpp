#include<bits/stdc++.h>
using namespace std;

int F[1005][25005], n , v, A[1005];

int qhd(){
	int i , j;
	memset(F,0,sizeof(F));
	for(i = 1; i <= n; i++){
		for(j = 1; j <= v; j++){
			F[i][j] = F[i-1][j];
			if (j >= A[i] && F[i-1][j-A[i]] + A[i] > F[i][j])
				F[i][j] = F[i-1][j-A[i]] + A[i];
		}
	}
	return F[n][v];
}

int main(){
		cin >> v >> n;
		for(int i = 1; i <= n; i++)	cin >> A[i];
		cout << qhd() << endl;
}

