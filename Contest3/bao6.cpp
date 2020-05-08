#include<bits/stdc++.h>
using namespace std;
bool ifPossible(int arr[], int n) 
{ 
    int cp[n];  
    
    copy(arr, arr + n, cp); 
  
  
    sort(cp, cp + n); 
  
    for (int i = 0; i < n; i++) { 
  
        if (arr[i] != cp[i] && arr[n - 1 - i] != cp[i]) 
            return false; 
    } 
  
    return true; 
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
		}
		if(ifPossible(a,n)){
			cout << "Yes" << endl;
		} else{
			cout << "No" << endl;
		}
	}
}
