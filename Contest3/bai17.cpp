#include<bits/stdc++.h>
using namespace std;

long long minSum(string s, int k){
	int l = s.length();
	
	if (k >= l)	return 0;
	
	int f[26] = {0}; // mang luu tan so ky tu;
	
	for(int i = 0 ; i < l ; i++){
		f[s[i] - 'A']++;
	}
	priority_queue<int> pq; // hang doi uu tien voi so lon dung dau;
	for(int i = 0 ; i < 26 ; i++){
		pq.push(f[i]);
	}
	// xoa k ky tu;
	while(k--){
		int temp = pq.top() ;// lay so lon nhat trong hang doi;
		pq.pop(); // xoa so nay di;
		temp -= 1; // giam di 1 ky tu;
		pq.push(temp);// luu lai vao hang doi
	}
	
	long long rs = 0;
	while(!pq.empty()){
		int temp = pq.top();
		rs += temp * temp;
		pq.pop();
	}
	
	return rs;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int k;
		cin >> k;
		cin.ignore();
		string s;
		getline(cin,s);
		cout << minSum(s,k) << endl;
		
	}
}
