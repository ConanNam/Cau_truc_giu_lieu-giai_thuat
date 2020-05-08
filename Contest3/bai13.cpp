#include<bits/stdc++.h>
using namespace std;


int cnt[26];

void solve(){
    string s;
	int k;
	cin>>k;
    cin>>s;
    int cnt[26] = {0};
    for(int i = 0 ; i < s.size(); i++){
    	cnt[s[i] - 'A']++;
	}
    int n = s.size();
    int t = n/k;
	if(n%k) t++;
    if(*max_element(cnt,cnt+26) > t) cout << "-1" << endl;
    else cout<< "1" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){solve();}
}
