#include<bits/stdc++.h>
using namespace std;

void findSmailess(int s, int d){
	if (s == 0){
		if (d == 1) cout << "0" << endl;
		else cout << "-1" << endl;
		return;
	}
	
	if (s > 9 * d){
		cout << "-1" << endl;
		return;
	}
	// giam s = s - 1 de co the tim
	// nhung so co 2 chu so voi tong <= 9;
	
	int rs[d];
	s -= 1;
	
	for(int i = d - 1; i > 0; i--){
		// neu tong s > 9 thi ky tu do la 9;
		if (s > 9){
			rs[i] = 9;
			s -= 9;
		}else{
			rs[i] = s;
			s = 0;
		}
	}
	// con tra lai s = s + 1 len ky tu dau;
	rs[0] = s + 1;
	for(int i = 0 ; i < d; i++){
		cout << rs[i];
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int s , d;
		cin >> s >> d;
		findSmailess(s,d);
	}
}
