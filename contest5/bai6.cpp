#include<bits/stdc++.h>
using namespace std;

int F[1005][1005];

int xau_con_doi_xung_max(string s){
	memset(F,0,sizeof(F));
	int n = s.length();
	int i , j , k, kq = 1;
	for(i = 0; i < n; i++)	F[i][i] = 1;
	
	for(k = 1; k < n; k++){
		for(i = 0; i < n - k; i++){
			j = i + k;
			if (s[i] == s[j] && k > 1)	F[i][j] = F[i+1][j-1];
			else if (s[i] == s[j] && k == 1) F[i][j] = 1;
			else F[i][j] = 0;
			
			if (F[i][j] == 1) kq = max(kq,j-i+1);
		}
	}
	return kq;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << xau_con_doi_xung_max(s) << endl;
	}
}
