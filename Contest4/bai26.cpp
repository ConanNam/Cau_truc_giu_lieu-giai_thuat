#include<bits/stdc++.h>
using namespace std;

const char CHAR_55 = 55;
const char CHAR_48 = 48;

void convertNum(long n , int k){
	if (k < 2 || k > 10)	return;
	char rs[20];
	int count = 0;
	int remainder = n;
	while(remainder > 0){
		if (k == 10){
			int temp = remainder % k;
			if (temp == 10){
				rs[count] = (char)(temp + CHAR_55);
				count++;
			}else{
				rs[count] = (char)(temp + CHAR_48);
				count++;
			}
		}else{
			int temp = remainder % k;
			rs[count] = (char)(temp + CHAR_48);
			count++;
		}
		remainder /= k;
	}
	
	for(int i = count - 1; i >= 0; i--)	cout << rs[i];
	cout <<endl;
}

int main(){
	long k , a , b;
	cin >> k >> a >> b;
	long sum = a + b;
	convertNum(sum,k);
}
