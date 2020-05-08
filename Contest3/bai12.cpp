#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a[26] = {0};
		for(int i = 0 ; i < s.length(); i++)
			a[s[i] - 'a']++;
		sort(a, a+26, greater<int>());
		int n = s.length();
		if (n % 2){
			if (a[0] > n/2 + 1)	cout << "-1" << endl;
			else	cout << "1" << endl;
		} else{
			if (a[0] > n/2)	cout << "-1" << endl;
			else cout << "1" << endl;
		}
	}
}
