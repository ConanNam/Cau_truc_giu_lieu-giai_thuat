#include<bits/stdc++.h>
using namespace std;
vector<int> sett; 
vector<int> prime; 
vector< vector<int> > rs;
int B[100];
// function to check prime number 
bool isPrime(int x) 
{ 

    int sqroot = sqrt(x); 
    bool flag = true; 
  
    
    if (x == 1) 
        return false; 
  
  
    for (int i = 2; i <= sqroot; i++) 
        if (x % i == 0) 
            return false; 
  
   
    return true; 
} 
  
// function to display N primes whose sum equals S 
void display() 
{ 
	cout << rs.size() << endl;
    for(int i = 0; i < rs.size(); i++){
    	for(int j = 0 ; j < rs[i].size(); j++){
    		cout << rs[i][j] << " ";
		}
		cout << endl;
	}
} 
  
// function to evaluate all possible N primes 
// whose sum equals S 
void primeSum(int total, int N, int S, int index) 
{ 
    // if total equals S And 
    // total is reached using N primes 
    if (total == S && sett.size() == N) 
    { 
        rs.push_back(sett);
        return;
    } 
  
    // if total is greater than S 
    // or if index has reached last element 
    if (total > S || index == prime.size()) 
        return; 
	
	if (!B[index]){
		sett.push_back(prime[index]);
		//total += prime[index];
		B[index] = 1;
    	primeSum(total+prime[index], N, S, index+1); 	
    // remove element from set vector 
		sett.pop_back();
		B[index] = 0;
    // exclude (index)th prime 
    	primeSum(total, N, S, index+1);
    //	B[index+1] = 1;
	}
}
  
// function to generate all primes 
void allPrime(int N, int S, int P)
{ 
    // all primes less than S itself 
    for (int i = P+1; i <=S ; i++) 
    { 
        // if i is prime add it to prime vector 
        if (isPrime(i)) 
            prime.push_back(i); 
    } 
  
    // if primes are less than N 
    if (prime.size() < N) 
        return;
    primeSum(0, N, S, 0); 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, p, s;
		cin >> n >> p >> s;
		B[100] = {0};
		allPrime(n,s,p);
		display();
		rs.clear();
	}
}
