#include<bits/stdc++.h>
using namespace std;
long a[1005];
long dp[100005];
long qhd(long a[], int n){
	dp[1] = a[1];
    	dp[2] = max(a[1],a[2]);
    for(int i = 3; i <= n ; i++)
        dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
return dp[n];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++)	cin >> a[i];
		cout << qhd(a,n) << endl;
	}
}
