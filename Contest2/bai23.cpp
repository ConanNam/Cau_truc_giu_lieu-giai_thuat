#include<bits/stdc++.h>
using namespace std;

int A[8][8], B[8][8], n, check, k;
string s;

void rs(int k){
	for(int i = 0 ; i < k; i++){
		cout << s[i];
	}
	cout << " ";
}

void Try(int i , int j, int k){
	if (i == n-1 && j == n-1 && A[n-1][n-1]){
		check = 1;
		rs(k);
		return;
	}
	if (i + 1 < n && A[i+1][j] && !B[i+1][j]){
		s[k] = 'D';
		B[i+1][j] = 1;
		Try(i+1,j,k+1);
		B[i+1][j] = 0;
	}
	if(j - 1 < n && A[i][j-1] && !B[i][j-1]){
		s[k] = 'L';
		B[i][j-1] = 1;
		Try(i,j-1,k+1);
		B[i][j-1] = 0;
		
	}
	if(j + 1 < n && A[i][j+1] && !B[i][j+1]){
		s[k] = 'R';
		B[i][j+1] = 1;
		Try(i,j+1,k+1);
		B[i][j+1] = 0;
		
	}
	if (i - 1 < n && A[i-1][j] && !B[i-1][j]){
		s[k] = 'U';
		B[i-1][j] = 1;
		Try(i-1,j,k+1);
		B[i-1][j] = 0;
		
	}
}


void init(){
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> A[i][j];
			B[i][j] = 0;
		}
	}
	s = "";
	check = 0;
	B[0][0] = 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		if(A[0][0] == 0) cout << "-1";
		else{
			Try(0,0,0);
			if (check == 0){
				cout << "-1";
			}
		}
		cout << endl;
	}
}
