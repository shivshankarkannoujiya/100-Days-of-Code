#include<iostream>
using namespace std;


void sortZerosOnes(int arr[], int size){

    // Count Zeros and Ones
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else if(arr[i] == 1){
            oneCount++;
        }
    }

    // Place Zeros 
    int index = 0;
    while(zeroCount--){
        arr[index] = 0;
        index++;
    }

    // Place Ones
    while(oneCount--){
        arr[index] = 1;
        index++;
    }

    // Printing Array After Sorting
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[] = {1,1,0,1,0,1,0,0,1,0,1,0,1};
    int size = sizeof(arr)/sizeof(int);

    // Calling function 
    sortZerosOnes(arr,size);
}