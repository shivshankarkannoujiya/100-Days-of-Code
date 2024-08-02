#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    // for(int i = 0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }

    int index = 0;
    while (index < size)
    {
        cout<<arr[index]<<" ";
        index++;
    }
    
}


void printArrayInReverse(int arr[], int size){
    
    while (size--)
    {
        cout<<arr[size]<<" ";
    }  
}

int main()
{
    int arr[]  = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    printArray(arr,size);
    cout<<endl;
    printArrayInReverse(arr,size);
}