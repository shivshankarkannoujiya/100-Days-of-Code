#include<iostream>
using namespace std;


void euclidAlgorithm(int a, int b){

    while(a > 0 && b > 0){

        if(a > b){
            a = a % b;
        }else{

            b = b % a;
        }
    }

    if(a == 0){
        cout<<"Ans is : "<<b<<endl;
    }else{
        cout<<"Ans is : "<<a<<endl;
    }
}

int main()
{
    int a = 52;
    int b = 10;

    euclidAlgorithm(a,b);
}