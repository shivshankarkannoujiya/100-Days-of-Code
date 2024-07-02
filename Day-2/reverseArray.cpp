#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int i = 0; 
    int j = size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    // Printng Array After reverse
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);

    // Calling function
    reverseArray(arr,size); 
}