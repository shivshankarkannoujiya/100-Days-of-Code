#include<iostream>
using namespace std;

int getExponent(int a, int b){
    int ans = 1;
    for(int i = 0; i<b; i++){
        ans = ans*a;
    }

    return ans;
}

int main()
{
    int a;
    int b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    int ans = getExponent(a,b);
    cout<<"Ans is : "<<ans<<endl;
}