#include<bits/stdc++.h>
using namespace std;

int A[20], Xuoi[20], Nguoc[20], X[20];
int n , countt;

void init(){
	cin >> n;
	A[20] = {0};
	Xuoi[20] = {0};
	Nguoc[20] = {0};
	countt = 0;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if (!A[j] && !Xuoi[i-j + n] && !Nguoc[i + j - 1]){
			X[i] = j;
			A[j] = 1;
			Xuoi[i-j + n] = 1;
			Nguoc[i + j - 1] = 1;
			if (i == n) countt++;
			else{
				Try(i+1);
			}
			A[j] = 0;
			Xuoi[i-j + n] = 0;
			Nguoc[i + j - 1] = 0;
		}
	}
}

int main(){
	init();
	Try(1);
	cout << countt << endl;
}
