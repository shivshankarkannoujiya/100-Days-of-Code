#include<iostream>
using namespace std;

int binarySearch(int nums[], int size, int target ){

    int start = 0; 
    int end = size-1;

    int mid = start + (end - start)/2;
    while(start <= end){
        if(nums[mid] == target ){
            return mid;
        }else if(target > nums[mid]){
            start = mid + 1;
        }else if(target < nums[mid]){
            end = mid - 1;
        }

        mid  = start + (end - start)/2;
    }

    return -1;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,12};   
    int size = sizeof(arr)/sizeof(int);
    int target = 10;

    int index = binarySearch(arr, size, target);
    if(index == -1){
        cout<<"Element not Found !"<<endl;
    }else{
        cout<<"Element Found at index : "<<index<<endl;
    }
}