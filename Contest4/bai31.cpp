#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const ll mod = (ll) 1e9 + 7;
const bool MULTI_TEST = true;
using namespace std;

int n,k;

struct MaTran
{
    long long c[10][10];
};
 
MaTran operator * (MaTran a, MaTran b)
{
    MaTran res;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            res.c[i][j] = 0;
            for (int k=0; k<n; k++)
                res.c[i][j] = (res.c[i][j]+a.c[i][k]*b.c[k][j])%mod;
        }
    return res;
}

MaTran powermod (MaTran a, long long n)
{
    if (n==1)
        return a;
    MaTran tmp = powermod(a,n/2);
    if(n%2==0) return tmp*tmp;
    return tmp*tmp*a;
}

void solve(){
	cin>>n>>k;
	MaTran A;
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>A.c[i][j];
	A = powermod(A,k);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout<<A.c[i][j]<<' ';
		cout<<endl;
	}
}

int main(){
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

