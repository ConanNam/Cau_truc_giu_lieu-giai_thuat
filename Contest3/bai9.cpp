#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int id[n], dl[n], pro[n];
		int rs = 0, count = 0;
		vector<bool> slot(n,false);
		for(int i = 0 ; i < n; i++){
			cin >> id[i] >> dl[i] >> pro[i];
		}
		// sap xep theo loi ich
		for(int i = 0 ; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if (pro[j] > pro[i]){
					swap(pro[i],pro[j]);
					swap(dl[i],dl[j]);
				}
			}
		}
		/*
		a)Find a time slot i, such that slot is empty and i < deadline and i is greatest.Put the job in
		this slot and mark this slot filled.
		b)If no such i exists, then ignore the job.
		*/
		for(int i = 0 ; i < n; i++){
			for(int j = min(n,dl[i]) - 1; j >= 0; j--){
				if (!slot[j]){
					rs += pro[i];
					count++;
					slot[j] = true;
					break;
				}
			}
		}
		cout << count <<" "<< rs << endl;
	}
}
