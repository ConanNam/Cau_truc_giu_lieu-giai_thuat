#include<bits/stdc++.h>
using namespace std;

int A[10][10], n, k, stop;
string s;

void rs(int k){
	for(int i = 0 ; i < k; i++){
		cout << s[i];
	}
	cout << " ";
}
void Try(int i , int j, int k){
	if (i == n-1 && j == n-1 && A[n-1][n-1] == 1){
		stop = 1;
		rs(k);
		return;
	}
	if (i + 1 < n && A[i+1][j]){
		s[k] = 'D';
		Try(i+1,j,k+1);
	}
	if(j + 1 < n && A[i][j+1]){
		 s[k] = 'R';
		Try(i,j+1,k+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		stop = 0;
		s = "";
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> A[i][j];
			}
		}
		if(A[0][0]== 0) cout <<"-1";
		else{
			Try(0,0,0);
			if(stop == 0){
				cout << "-1";
			}
		}
		cout << endl;
	}
}
