#include<iostream>
using namespace std;

int firstOccurence(int nums[], int size , int target){

    int startIndex = 0; 
    int endIndex = size - 1;
    int ans = -1;
    int mid = (startIndex + endIndex )/2;

    while(startIndex <= endIndex){
        if(nums[mid] == target){
            ans = mid;
            endIndex = mid-1;
        }else if(target > nums[mid]){
            startIndex = mid + 1;
        }else if(target < nums[mid]){
            endIndex = mid - 1;
        }

        mid = (startIndex + endIndex)/2;
    }

    return ans;
}
int lastOccurence(int nums[], int size , int target){

    int startIndex = 0; 
    int endIndex = size - 1;
    int ans = -1;
    int mid = (startIndex + endIndex )/2;

    while(startIndex <= endIndex){
        if(nums[mid] == target){
            ans = mid;
            startIndex = mid+1;
        }else if(target > nums[mid]){
            startIndex = mid + 1;
        }else if(target < nums[mid]){
            endIndex = mid - 1;
        }

        mid = (startIndex + endIndex)/2;
    }

    return ans;
}

int totalOccurence(int nums[], int size, int target){

    int firstOccuredIndex = firstOccurence(nums , size, target);
    int lastOccuredIndex = lastOccurence(nums, size, target);
    int totalOccurenceOfElement = (lastOccuredIndex - firstOccuredIndex) +1;

    return totalOccurenceOfElement;
}


int main()
{
    int arr[] = {1,2,3,3,3,3,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int target = 3;

    cout<<"First Ouccurence Index is : "<<firstOccurence(arr, size , target)<<endl;
    cout<<"last Ouccurence Index is : "<<lastOccurence(arr, size , target)<<endl;
    cout<<"Total Occurence is : "<<totalOccurence(arr, size, target);
}