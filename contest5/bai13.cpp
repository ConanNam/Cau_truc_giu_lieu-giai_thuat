#include<bits/stdc++.h>
using namespace std;

long long ugly[10000];

void getUgly(int n){
	int i2 = 1, i3 = 1, i5 = 1; 
    long long next_multiple_of_2 = 2; 
    long long next_multiple_of_3 = 3; 
    long long next_multiple_of_5 = 5; 
    long long next_ugly_no = 1;
    ugly[1] = 1;
    
    for(int i = 2; i <= n; i++){
    	next_ugly_no = min (next_multiple_of_2,min(next_multiple_of_3,next_multiple_of_5));
    	ugly[i] = next_ugly_no;
    	
    	if (next_ugly_no == next_multiple_of_2){
    		i2++;
    		next_multiple_of_2 = ugly[i2] * 2;
		}
		if (next_ugly_no == next_multiple_of_3){
    		i3++;
    		next_multiple_of_3 = ugly[i3] * 3;
		}
		if (next_ugly_no == next_multiple_of_5){
    		i5++;
    		next_multiple_of_5 = ugly[i5] * 5;
		}
	}
}

int main(){
	int t;
	cin >> t;
	getUgly(10000);
	while(t--){
		int n;
		cin >> n;
		cout << ugly[n] << endl;
	}
}
