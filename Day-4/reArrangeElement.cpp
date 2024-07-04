#include<iostream>
using namespace std;


void reArrangeArrayElement(int arr[], int size){
    int j = 0; 
    for(int i =0; i<size; i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

// Printig Array 
    for(int i =0 ; i<size; i++){
    cout<<arr[i]<<" ";
    
}

}

int main()
{
    int arr[] = {1,2,-5,-7,12,15,-70,90};
    int size = sizeof(arr)/sizeof(arr[0]);

    reArrangeArrayElement(arr,size);
}