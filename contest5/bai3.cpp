#include<bits/stdc++.h>
using namespace std;

int a[205], l[40005], n,s;

int check(int a[], int n, int s){
	int i, j;
	memset(l,0,sizeof(l));
	l[0] = 1;
	for(i = 1; i <= n; i++){
		for(j = s; j >= a[i]; j--){
			if (l[j] == 0 && l[j-a[i]] == 1){
				l[j] = 1;
			}
		}
	}
	return l[s];
}




int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i = 1; i <= n; i++)	cin >> a[i];
		if (check(a,n,s) == 1)	cout <<"YES" << endl;
		else	cout << "NO" << endl;
	}
}
