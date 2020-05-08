#include<bits/stdc++.h>
using namespace std;

int X[] = {1 ,2 ,5 ,10, 20, 50, 100, 200, 500, 1000};
int n;

int solution(){
	int i;
	int count = 0;
	for(i = 0; i < 10; i++){
		if (X[i] > n ){
			break;
		}
	}
	for(int j = i-1 ; j >=0 ; j--){
		if (n >= X[j]){
			int coin = n / X[j];
        	n = n - X[j] * coin;
        	count += coin;
		}
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cout << solution() << endl;
	}
}
