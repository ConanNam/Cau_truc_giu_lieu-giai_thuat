#include<bits/stdc++.h>
using namespace std;

int A[9], Xuoi[9], Nguoc[9], B[9][9];
long fopt;
//vector<int> X(9,0);
//vector< vector<int> > rs;
void init(){
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++){
			cin >> B[i][j];
		}
	}
	A[9] = {0};
	Xuoi[9] = {0};
	Nguoc[9] = {0};
}

/*void findMax(){
	for(int i = 0 ; i < rs.size(); i++){
		long max = 0;
		for(int j = 0 ; j < rs[i].size(); j++){
			max += rs[i][j];
		}
		if (fopt < max) fopt = max;
	}
}
*/
void Try(int i, long temp){
	for(int j = 1; j <= 8; j++){
		if (!A[j] && !Xuoi[i-j+8] && !Nguoc[i + j - 1]){
			A[j] = 1;
			//X[i] = j;
			Xuoi[i - j + 8] = 1;
			Nguoc[i + j - 1] = 1;
			temp += B[i][j];
			if (i == 8){
				if (temp > fopt) fopt = temp;
				//cout << temp << endl;
			} else Try(i + 1, temp);
			A[j] = 0;
			Xuoi[i - j + 8] = 0;
			Nguoc[i + j - 1] = 0;
			temp -= B[i][j];
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		fopt = 0;
		int temp = 0;
		Try(1, temp);
		//findMax();
		cout << fopt << endl;
	}
}
