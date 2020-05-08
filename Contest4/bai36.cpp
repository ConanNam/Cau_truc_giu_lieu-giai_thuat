#include<bits/stdc++.h>
using namespace std;

long long multi_binary(string s1, string s2){
	long long num1 = 0, num2 = 0;
	int m = s1.length();
	int n = s2.length();
	for(int i = 0 ; i < m; i++){
		if (s1[i] == '1'){
			num1 += pow(2,m-i-1);
		}
	}
	// num2 sang he 10;
	for(int j = 0 ; j < n ; j++){
		if (s2[j] == '1'){
			num2 += pow(2,n-j-1);
		}
	}
	return num1 * num2;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << multi_binary(s1,s2) << endl;
	}
}
