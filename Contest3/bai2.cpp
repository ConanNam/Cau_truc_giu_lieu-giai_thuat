#include<bits/stdc++.h>
using namespace std;

long change5(long n){
	long c = 0, count = 0;
	while(n > 0){
		int temp = n % 10;
		if (temp == 6) temp = 5;
		count++;
		c += pow(10,count-1) * temp;
		n = n / 10;
	}
	return c;
}

long change6(long n){
	long c = 0, count = 0;
	while(n > 0){
		int temp = n % 10;
		if (temp ==5) temp = 6;
		count++;
		c += pow(10,count-1) * temp;
		n = n / 10;
	}
	return c;
}

int main(){
	long a ,b;
	cin >> a >> b;
	cout << change5(a) + change5(b) << " ";
	cout << change6(a) + change6(b) << endl;
}
