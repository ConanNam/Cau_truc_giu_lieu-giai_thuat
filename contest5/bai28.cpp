#include<bits/stdc++.h>
using namespace std;
int F[105][105];

int qhd(string s1, string s2){
	memset(F,0,sizeof(F));
	int rs = 0, m = s1.length(), n = s2.length();
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if (s1[i-1] == s2[j-1]){
				F[i][j] = F[i-1][j-1] + 1;
			}else{
				F[i][j] = max(F[i-1][j], F[i][j-1]);
			}
		}
	}
	
	rs = max(m,n) - F[m][n];
	return rs;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << qhd(s1,s2) << endl;
	}
}
