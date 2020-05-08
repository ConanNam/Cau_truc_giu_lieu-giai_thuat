#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
		}
		long summax = a[0];
		for(int i = 0 ; i < n ; i++){
			long sum = a[i];
			for(int j = i + 1; j < n; j++){
				sum += a[j];
				summax = max(summax,sum);
			}
		}
		cout << summax << endl;
	}
}
