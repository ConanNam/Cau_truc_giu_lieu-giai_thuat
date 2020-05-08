#include<bits/stdc++.h>
using namespace std;

int c[1005][1005][1005];

int qhd(string s1, string s2, string s3){
	int m = s1.length();
	int n = s2.length();
	int l = s3.length();
	int i , j , k;
	for(i = 0; i <= m; i++){
		for(j = 0; j <= n; j++){
			for(k = 0; k <= l; k++){
				if (i == 0 || j == 0 || k == 0)
					c[i][j][k] = 0;
				else if (s1[i-1] == s2[j-1] && s1[i-1] == s3[k-1]){
					c[i][j][k] = c[i-1][j-1][k-1]  + 1;
				}else{
					c[i][j][k] = max(max(c[i-1][j][k],c[i][j-1][k]),c[i][j][k-1]);
				}
			}
		}
	}
	return c[m][n][l];
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2, s3;
		cin >> s1 >> s2 >> s3;
		cout << qhd(s1,s2,s3) << endl;
	}
}

