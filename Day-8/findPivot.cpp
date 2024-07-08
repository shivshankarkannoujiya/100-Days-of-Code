#include<iostream>
#include<vector>
using namespace std;


int findPivotIndex(vector<int>& nums){

    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start <= end){

        if(start == end){
            return start;
        }else if(nums[mid]<nums[mid - 1]){
            return mid - 1;
        }else if(nums[mid]>nums[mid + 1]){
            return mid;
        }else if(nums[start] > nums[mid]){
            end = mid - 1;
        }else{
            start =  mid + 1; 
        }

        mid = start + (end - start)/2;
    }

    // if not found return any invalid index
    return -1;
}

int main()
{
    vector<int>nums = {12,14,16,2,4,6,8,10};
    int pivotIndex = findPivotIndex(nums);
    cout<<"Pivot Index is : "<<pivotIndex<<endl;
}

