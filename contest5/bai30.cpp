#include<bits/stdc++.h>
using namespace std;

int F[10005], n;

void qhd(){
	memset(F,0,sizeof(F));
	F[0] = 0; F[1] = 1;
	F[2] = 2; F[3] = 3;
	for(int i = 4; i <= 10000; i++){
		F[i] = i;
		for(int j = 1; j <= ceil(sqrt(i)); j++){
			int x = j * j;
			if (x > i) break;
			else
				F[i] = min(F[i],F[i-x] + 1);
		}
	}
}


int main(){
	int t;
	cin >> t;
	qhd();
	while(t--){
		cin >> n;
		cout << F[n] << endl;
	}
}
