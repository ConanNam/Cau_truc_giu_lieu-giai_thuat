#include<bits/stdc++.h>
using namespace std;

int n, x , check;

void rs(vector<int> sum){
	cout <<"[";
	for(int i = 0 ; i < sum.size() - 1; i++){
		cout << sum[i] << " ";
	}
	cout << sum[sum.size() - 1] << "] ";
}


void find(vector<int> a, vector<int> &sum, int x, int i){
	if (x < 0) return;
	if (x == 0){
		check = 1;
		rs(sum);
	}
	while(i < a.size() && x - a[i] >= 0){
		sum.push_back(a[i]);
		find(a,sum, x-a[i], i);
		i++;
		sum.pop_back();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> x;
		check = 0;
		vector<int> a;
		for(int i = 0 ; i < n; i++){
			int x;
			cin >> x;
			a.push_back(x);
		}
			sort(a.begin(), a.end());
		for(int i = 0 ; i < a.size() - 1; i++){
			if (a[i] == a[i+1]){
				a.erase(a.begin() + i);
					i--;
				}
		}
		vector<int> temp;
		int i = 0;
		find(a,temp, x,i);
		if (check == 0) cout << "-1";
		cout << endl;
	}
}
