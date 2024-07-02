#include<iostream>
using namespace std;

void printExtreme(int arr[], int size){
    int i = 0; 
    int j = size-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<" ";
        }else{
            cout<<arr[i]<<" ";
            cout<<arr[j]<<" ";
        }
        i++;
        j--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);

    // Calling function 
    printExtreme(arr,size);
}