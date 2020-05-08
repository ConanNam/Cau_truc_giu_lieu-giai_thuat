#include<bits/stdc++.h>
using namespace std;

long findIndex1(long long a[], long long b[], long long low, long long height){
	if (low > height){ 
	return height + 2;
	}
	long long mid = (low + height) / 2;
	if (a[mid] != b[mid]){
	 return mid + 1;
	}
	return  findIndex1(a,b,mid+1,height);
}

long findIndex2(long long a[], long long b[], long long low, long long height){
	if (low > height){ 
	return -1;
	}
	long long mid = (low + height) / 2;
	if (a[mid] != b[mid]){
	 return mid + 1;
	}
	return  findIndex2(a,b,low,mid-1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n], b[n-1];
		for(long long i = 0 ; i < n; i++)	cin >> a[i];
		for(long long j = 0 ; j < n-1; j++)	cin >> b[j];
		long long index1 = findIndex1(a,b,0,n-2);
		long long index2 = findIndex2(a,b,0,n-2);
		if (index2 == -1) cout << index1 << endl;
		else{
			cout << index2 << endl;
		}
	}
}
