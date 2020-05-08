#include<bits/stdc++.h>
using namespace std;

int A[10], B[10], n, check, k;

void init(){
	cin >> n >> k;
	check = 0;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	sort(A,A+n);
}

void rs(){
	int t = 0;
	vector<int> temp;
	for(int i = 0 ; i < n ; i++){
		t += A[i] * B[i];
	}
	if (t == k){
		check = 1;
		for(int i = 0; i < n; i++){
			if (B[i]){
				temp.push_back(A[i]);
			}
		}
		cout << "[";
		for(int i = 0; i < temp.size() - 1; i++){
			cout << temp[i] << " "; 
		}
		cout << temp[temp.size() - 1] << "] ";
	}
}

void Try(int i){
	for(int j = 1; j >= 0; j--){
		B[i] = j;
		if (i == n-1){
			rs();
		}else{
			Try(i+1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		Try(0);
		if (check == 0) cout << "-1";
		cout << endl;
	}
}
