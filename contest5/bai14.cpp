#include<bits/stdc++.h>
using namespace std;
int F[105][105];

int qhd(string s, int n){
	int i , j;
	memset(F,0,sizeof(F));
	for(i =1; i <= n; i++){
		for(j = 1; j <= n; j++){
			if (s[i-1] == s[j-1] && i != j)
				F[i][j] = F[i-1][j-1]  + 1;
			else
				F[i][j] = max(F[i-1][j],F[i][j-1]);
		}
	}
	return F[n][n];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		cout << qhd(s,n) << endl;
	}
}
