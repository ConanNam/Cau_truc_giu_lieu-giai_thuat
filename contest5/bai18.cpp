#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef struct{
	int first, second;
}Pair;
Pair a[105];
int f[105];
int tinh(int n){
	int Max = -1;
	f[1] = 1;
	for(int i= 1;i <= n; i++){
		f[i]=1;
			for(int j = 0; j < i; j++){
				if(a[j].second < a[i].first)	
					f[i] = max(f[i],f[j]+1);
			}
		Max = max(Max,f[i]);
	}
	return Max;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)	
		cin >> a[i].first >> a[i].second;
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if (a[i].first > a[j].first){
				swap(a[i],a[j]);
			}
		}
	}
	cout << tinh(n) << endl;
	}
	return 0;
}
