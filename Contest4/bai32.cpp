#include<bits/stdc++.h>
using namespace std;

int getInvCount(long long a[], long n){
	//sort(a, a+n, greater<long long>());
	multiset<long long> set1;
	set1.insert(a[0]);
	
	int count = 0;
	
	multiset<long long>::iterator it;
	
	for(long i = 1; i < n; i++){
		// them a[i] vao set1;
		set1.insert(a[i]);
		
		// gan it voi vi tri dau tien lon hon a[i] trong set1;
		it = set1.upper_bound(a[i]);
		// L?y kho?ng cách c?a ph?n t? l?n hon d?u tiên t? cu?i 
		// và kho?ng cách này là s? ph?n t? l?n hon 
		// ? bên trái c?a a[i]
		
		count += distance(it,set1.end());
	}
	
	return count;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long long a[n];
		for(long i = 0 ; i < n; i++)	cin >> a[i];
		cout << getInvCount(a,n) << endl;
	}
}
