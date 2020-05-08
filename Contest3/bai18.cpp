#include<bits/stdc++.h>
using namespace std;

void findLuckyNum(int n){
	int temp1 = 0 , temp2 = 0;
	while(n > 0){
		if (n % 7 == 0){
			temp2++;
			n -= 7;
		}else if (n % 4 == 0){
			temp1++;
			n -= 7;
		}
		// Neu n khong chia het cho ca 4 va 7 mac dinh n = n - 4;
		else{
			temp1++;
			n -= 4;
		}
	}
	if (n < 0){
		cout << "-1" <<endl;
		return;
	}
	for(int i = 0 ; i < temp1; i++)	cout << "4";
	for(int j = 0 ; j < temp2; j++)	cout <<"7";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		findLuckyNum(n);
	}
}
