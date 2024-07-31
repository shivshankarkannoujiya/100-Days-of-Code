#include<iostream>
using namespace std;


int findGcdBruteForceMethod(int numOne, int numTwo){

    int minNum = min(numOne,numTwo);
    int gcd = 1;
    for(int i = 1; i<=minNum; i++){
        if(numOne % i == 0 && numTwo % i == 0){
            gcd = i;
        }
    }

    return gcd;
}


int main()
{
    int numOne;
    int numTwo;

    cout<<"Enter the Number one : ";
    cin>>numOne;

    cout<<"Enter the Number Two : ";
    cin>>numTwo;

    int gcd = findGcdBruteForceMethod(numOne,numTwo);
    cout<<"GCD is : "<<gcd<<endl;
}