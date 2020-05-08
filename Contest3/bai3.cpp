#include<bits/stdc++.h>
using namespace std;
int static P = 1000000007;

void solution();void solution(int a[], int n){
	sort(a, a + n);
	long long sum = 0;
	for(int i = 1; i < n; i++){
		sum += a[i] * i;
		sum %= P;
	}
	cout << sum << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
		}
		solution(a,n);
	}
}



