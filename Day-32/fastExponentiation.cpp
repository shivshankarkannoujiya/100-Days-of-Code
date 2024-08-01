#include<iostream>
using namespace std;

int getExponent(int a , int b){


    int temp = b;
    int ans = 1;
    while(b>0){
        if(b % 2 == 1){
            ans = ans*a;
            b = b - 1;
        }else{
            a = a*a;
            b = b/2;
        }

    }
        if (temp < 0)
        {
            ans = 1/ans;
        }

    return ans;
}

int main()
{
    int a = 2;
    int b = 2;

    int ans = getExponent(a,b);
    cout<<"Ans is : "<<ans<<endl;
}