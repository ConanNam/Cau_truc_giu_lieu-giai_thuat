#include<bits/stdc++.h>
using namespace std;


void findMaxNumber(string s, int k, string &maxS){
	if (k == 0) return;
	int n = s.length();
	for(int i = 0 ; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			if (s[j] > s[i]){
				swap(s[j],s[i]);
				if (s.compare(maxS) > 0) {
					maxS = s;
				}
				findMaxNumber(s,k-1,maxS);
				swap(s[i],s[j]);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		cin.ignore();
		string s;
		cin >> s;
		string maxS = s;
		findMaxNumber(s, k, maxS);
		cout << maxS << endl;
	}
}
