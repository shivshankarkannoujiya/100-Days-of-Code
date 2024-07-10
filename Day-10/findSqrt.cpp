#include<iostream>
using namespace std;


int mySqrt(int n){
    
    int low = 1;
    int high = n;
    int ans = 0;

    while(low <= high){
        long long mid = (low + high)/2;
        long long val = (mid*mid);

        if(val <= n){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    // return high;
    return ans;
}


int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int sqrt = mySqrt(n);
    cout<<"Sqrt of n is : "<<sqrt<<endl;

}