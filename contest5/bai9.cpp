#include<bits/stdc++.h>
using namespace std;
long M = 1e9+7;
long long F[105][50005];
long long countRec(int n, int sum){
	if (n == 0)
		return sum == 0;
	if (F[n][sum] != -1)
		return F[n][sum];
	
	long long ans = 0;
	for(int i = 0 ; i <= 9; i++){
		if (sum - i >= 0){
			ans = (ans + countRec(n-1,sum-i)) % M;
		}
	}
	
	return F[n][sum] = ans;
}

long long find_count(int n, int sum){
	memset(F,-1,sizeof(F));
	long long ans = 0;
	
	for(int i = 1; i <= 9; i++){
		if (sum - i >= 0){
			ans = (ans + countRec(n-1,sum-i)) % M;
		}
	}
	
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << find_count(n,k) << endl;
	}
}
