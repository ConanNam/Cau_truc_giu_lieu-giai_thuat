#include<bits/stdc++.h>
using namespace std;

string toString(long long n){
	string s = "";
	while(n > 0){
		s = char(n % 10 +'0') + s;
		n = n / 10;
	}
	return s;
}

vector<string> gencube(long long n){
	vector<string> rs;
	for(long long i = 1; i * i * i <= n; i++){
		long long x = i * i *i;
		string temp = toString(x);
		rs.push_back(temp);
	}
	return rs;
}

string numCube(long long n){
	vector<string> cube = gencube(n);
	string a = toString(n);
	for(long i = cube.size() - 1; i >= 0; i--){
		string currCube = cube[i];
		long index = 0;
		for(long j = 0 ; j < a.size(); j++){
			if (a[j] == currCube[index]){
				index++;
			}
		}
		if (index == currCube.size()){
			return currCube;
		}
	}
	return "-1";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << numCube(n) << endl;
	}
}
