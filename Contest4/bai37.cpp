#include<bits/stdc++.h>
using namespace std;

long indexFloor(long x, long low, long heght, long long a[]){
	if (low > heght)	return -1;
	if (x >= a[heght])	return heght;
	
	long mid = (heght + low) / 2;
	
	if (x == a[mid]) return mid;
	// Neu x nam giua mid -1 va mid;
	if (mid > 0 && a[mid-1] <= x && x < a[mid])	return mid - 1;
	
	if (x < a[mid])	return indexFloor(x,low,mid-1,a);
	return	indexFloor(x,mid+1,heght,a);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, x;
		cin >> n >> x;
		long long a[n];
		for(long i = 0 ; i < n; i++) cin >> a[i];
		
		long index = indexFloor(x,0,n-1,a);
		if (index == -1)	cout << "-1" << endl;
		else{
			cout << index+1 << endl;
		}
	}
}
