#include<iostream>
using namespace std;

void swapNumberBuiltIn(int a, int b){
    swap(a,b);
    cout<<"After Swapping  : "<<"a : "<<a<<" , "<<"b : "<<b<<endl;
}



void swapNumberUsingTemp(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"After Swapping  : "<<"a : "<<a<<" , "<<"b : "<<b<<endl;
}

void swapNumberUsingArithmeticOpn(int a , int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After Swapping  : "<<"a : "<<a<<" , "<<"b : "<<b<<endl;
}

void swapNumbersUsingXOR(int a, int b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"After Swapping  : "<<"a : "<<a<<" , "<<"b : "<<b<<endl;
}

void swapNumberUsingMutlAndDiv(int a, int b){
    a = a * b;
    b = a / b;
    a = a / b;
    cout<<"After Swapping  : "<<"a : "<<a<<" , "<<"b : "<<b<<endl;
}

void swapNumbersUsingArithmeticBodmas(int a, int b){
    a = (a + b) - (b = a);
    cout<<"After Swapping  : "<<"a : "<<a<<" , "<<"b : "<<b<<endl;
}

int main()
{
    int a = 5;
    int b = 10;
    cout<<"Before Swapping : "<<"a : "<<a<<" ,  "<<"b : "<<b<<endl;
    swapNumberBuiltIn(a,b);
    swapNumberUsingTemp(a,b);
    swapNumberUsingArithmeticOpn(a,b);
    swapNumbersUsingXOR(a,b);
    swapNumberUsingMutlAndDiv(a,b);
    swapNumbersUsingArithmeticBodmas(a,b);
    
}