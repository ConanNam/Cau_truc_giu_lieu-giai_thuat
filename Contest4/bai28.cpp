#include<bits/stdc++.h>
using namespace std;

int find_kangaru(int a[], int n){
	int mid = (n-1)/2;
	int i = mid;
	int j = n-1;
	int count = 0;
	while(mid < j && i >= 0){
		if (a[j] >= 2*a[i]){
			count++;
			i--;
			j--;
		}
		else{
			i--;
		}
	}
	return count + (n - 2*count);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i++)
			cin >> a[i];
			
		sort(a,a+n);
		cout << find_kangaru(a,n) << endl;
	}
}
