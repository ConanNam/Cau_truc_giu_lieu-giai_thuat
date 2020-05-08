#include <bits/stdc++.h>
using namespace std;	// WA
long long a[100],b[100],c[200];

int main (){
	int n,m,t,k;
	cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i=0;i<n;i++)
			cin >> a[i];
		for (int i=0;i<m;i++)
			cin >> b[i];
		for (int i=0;i<n+m-1;i++)
			c[i]=0;
		k=0;
		while (k < m)
		{
			for (int j=0;j<n;j++)
				c[j+k] += a[j]*b[k];
			k++;
		}
		for (int i=0;i<n+k-1;i++)
			cout << c[i] << " ";
		cout << endl;
	}
}
