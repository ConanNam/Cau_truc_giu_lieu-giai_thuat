#include<bits/stdc++.h>
using namespace std;

void solution(int n, int k, int a[]){
	sort(a, a + n, greater<int>());
	long long A = 0, B = 0;
	int M = max(k , n - k);
	for(int i = 0 ; i < M ; i++){
		A += a[i];
	}
	for(int j = M ; j < n; j++){
		B += a[j];
	}
	
	cout << abs(B - A) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
		}
		solution(n,k,a);
	}
}
