#include<bits/stdc++.h>
using namespace std;
long static P = 1e9+7;

long long minCost(long long a[], long long n){
	priority_queue<long long, vector<long long>, greater<long long> > pq(a, a + n);
	
	long long rs = 0;
	
	while(pq.size() > 1){
		long long first = pq.top();
		pq.pop();
		long long second = pq.top();
		pq.pop();
		long long new_top = ((first % P) + (second % P)) % P;
		rs = (rs + new_top) % P;
		pq.push(new_top);
	}
	return rs % P;
}

int main(){
	long long n;
	cin >> n;
	long long a[n];
	for(long long i = 0 ; i < n; i++) cin >> a[i];
	
	cout << minCost(a,n) << endl;
}
