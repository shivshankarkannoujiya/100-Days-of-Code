#include<iostream>
using namespace std;

int findMissingNumber(int nums[], int size){

    int s = 0; 
    int e = size - 1;
    int ans = 0;
    int mid = (s + e)/2;

    while(s <= e){
        int difference =  nums[mid] - mid;
        if(difference == 1){
            s = mid + 1;
        }else{
            ans = nums[mid];
            e = mid - 1;
        }
        mid = (s + e)/2;
    }

    if(ans -1 == -1){
        return size +1;
    }

    return ans -1;

}

int main()
{
    int arr[] = {1,2,3,4,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int missingNumer = findMissingNumber(arr,size);
    cout<<"Missing Number is : "<<missingNumer<<endl;

}