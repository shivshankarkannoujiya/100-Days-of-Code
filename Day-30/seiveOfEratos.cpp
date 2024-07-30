#include<iostream>
#include<vector>
using namespace std;


void printPrimeNumbers(int n){

    vector<int>prime(n,1);

    for(int i = 2; i*i <= n; i++){

        if(prime[i] == 1){

            for(int j = i*i; j<=n; j+=i){
                prime[j] = 0;
            }
        }
    }

    cout<<"Primes are : ";
    for(int i = 2; i<=n; i++){
        if(prime[i] == 1){
            cout<<i<<" ";
        }
    }
}


int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    printPrimeNumbers(n);
    
}