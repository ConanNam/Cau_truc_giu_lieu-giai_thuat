#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s, m;
		cin >> n >> s >> m;
		int countSun = s / 7; // dem so ngay chu nhat
		if (n * (s - countSun) < m * s)	cout << "-1" << endl;
		else{
			int temp = (m * s) % n;
			if (temp) cout << (m * s)/n + 1 << endl;
			else cout << (m * s)/n << endl;
			}
	}
}
