#include<bits/stdc++.h>
using namespace std;

int A[15], C[15][15], B[15];
int cmin, cost, fopt, n;

void init(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cin >> C[i][j];
		B[i] = 1;
	}
	A[1] = 1;
	cost = 0;
	fopt = 10000;
}

int Min_Matrix(){
	int min = 1000;
	for(int j = 1; j <= n ; j++){
		for(int i = 1; i <= n; i++){
			if (j != i && min > C[j][i])
				min = C[j][i];
		}
	}
	return min;
}

void rs(){
	int sum = cost + C[A[n]][A[1]];
	if (sum < fopt)
		fopt = sum;
}

void Try(int i){
	for(int j = 2; j <= n; j++){
		if (B[j]){
			A[i] = j;
			B[j] = 0;
			cost += C[A[i-1]][A[i]];
			if (i == n) rs();
			else if (cost + (n - i + 1) * cmin < fopt){
				Try(i + 1);
			}
			B[j] = 1;
			cost -= C[A[i-1]][A[i]];
		}
	}
}

int main(){
	init();
	cmin = Min_Matrix();
	Try(2);
	cout << fopt << endl;
}
