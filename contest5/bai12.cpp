#include<bits/stdc++.h>
using namespace std;
long M = 1e9+7;
//long long F[10005];

long long P(int n, int k){
	//memset(F,0,sizeof(F));
	long long ans = 1;
	if (k == 0)
		return 1;
	else if (k > n)
		return 0;
	else{
		for(int j = 1; j <= k ; j++){
			ans = (ans % M * (n-j+1) % M) % M;
		}
	}
	return ans;
	
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		cout << P(n,k) << endl;
	}
}
