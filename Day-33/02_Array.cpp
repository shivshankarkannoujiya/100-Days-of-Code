#include<iostream>
using namespace std;

void doubleUpValue(int arr[], int size){

    for(int i = 0; i<size; i++){
        arr[i] = 2 * arr[i];
    }

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int getTotalSum(int arr[], int size){

    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum+arr[i];
    }

    return sum;
}


int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    // doubleUpValue(arr,size);

    int totalSum = getTotalSum(arr,size);
    cout<<"Total sum is: "<<totalSum<<endl;
}