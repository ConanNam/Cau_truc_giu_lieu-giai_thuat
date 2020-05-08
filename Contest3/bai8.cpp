#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int start[n];
		int finish[n];
		for(int i =  0; i < n; i++){
			cin >> start[i];
		}
		for(int j = 0 ; j < n; j++){
			cin >> finish[j];
		}
		
		for(int i = 0 ; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if (finish[j] < finish[i]){
					swap(finish[i],finish[j]);
					swap(start[i],start[j]);
				}
			}
		}
		
		int count =  1;
		// hoat dong dau tien luon duoc chon;
		int i = 0, j;
		
		for(j = 1; j < n; j++){ /* Neu hoat dong này có thoi gian bat dau lon hon hoac
       bang voi thoi gian ket thuc dã chon truoc dó
        hoat dong sau dó thi chon */
			if (start[j] >= finish[i]){
				i = j;
				count++;
			}
		}
		
		cout << count << endl;
	}
}
