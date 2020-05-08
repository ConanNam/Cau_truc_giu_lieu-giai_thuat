#include<bits/stdc++.h>
using namespace std;
int C[1001][1001];

int xau_con_max(string s1, string s2){
	int m = s1.length();
	int n = s2.length();
	int i , j;
	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++){
			if (s1[i-1] == s2[j-1]){
				C[i][j] = C[i-1][j-1] + 1;
			}else{
				C[i][j] = max(C[i-1][j],C[i][j-1]);
			}
		}
	}
	return C[m][n]; 
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << xau_con_max(s1,s2) << endl;
	}
}

