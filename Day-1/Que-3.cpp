#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[], int size){
    int maxNum = INT_MIN;
    for(int i = 0; i<size; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int getMin(int arr[], int size){
    int minNum = INT_MAX;
    for(int i = 0; i<size; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    return minNum;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);

    int maxNumber = getMax(arr, size);
    cout<<"Maximum Number is : "<<maxNumber<<endl;

    int minNumber = getMin(arr,size);
    cout<<"Minimum Number is : "<<minNumber<<endl;
}