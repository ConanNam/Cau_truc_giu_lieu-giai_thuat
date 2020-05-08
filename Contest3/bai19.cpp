#include<bits/stdc++.h>
using namespace std;

void printEgy(long long nr, long long dr){
	vector<long long> dro;
	long long e = __gcd(nr,dr);
	nr = nr/e;
	dr = dr/e;
	if (dr % nr == 0){
		cout << "1/" << dr/nr << endl;
		return;
	}
	while(nr != 1){
		long long n = dr/nr;
		if (dr % nr) n++;
		dro.push_back(n);
		nr = n * nr - dr;
		dr = n * dr;
		long long e = __gcd(nr,dr);
		nr = nr/e;
		dr = dr/e;
	}
	for(int i = 0 ; i < dro.size(); i++){
		cout << "1/" << dro[i] << " + ";
	}
	cout << "1/" << dr << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long nr, dr;
		cin >> nr >> dr;
		printEgy(nr,dr);
	}
}
