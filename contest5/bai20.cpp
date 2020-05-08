#include<bits/stdc++.h>
using namespace std;
long long Sum[10005];
int toDigit(char ch){
	return (ch - '0');
}

long long qhd(string s){
	long long n = s.length();
	Sum[0] = toDigit(s[0]);
	long long rs = Sum[0];
	for(long long i = 1; i < n; i++){
		int numi = toDigit(s[i]);
		Sum[i] = (i+1)*numi + 10*Sum[i-1];
		
		rs += Sum[i];
	}
	return rs;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << qhd(s) << endl;
	}
}
