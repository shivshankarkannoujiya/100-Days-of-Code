#include<iostream>
#include<vector>
using namespace std;

int finPivotIndex(vector<int>& nums){

    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start <= end){

        // Corner Case
        if(start == end){
            return start;
        }

        if( (mid+1<n) && nums[mid]>nums[mid+1]){
            return mid;
        }else if((mid -1 >= 0)&& nums[mid]<nums[mid-1]){
            return mid - 1; 
        }else if(nums[start] > nums[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }

    return -1;
}


int binarySearch(vector<int>& nums,int start, int end , int target){

    int n = nums.size();
    int mid = start + (end - start)/2;

    while(start <= end){
        if(nums[mid] == target){
            return mid;
        }else if(target > nums[mid]){
            start = mid + 1;
        }else{
            end = mid - 1; 
        }
        mid = start + (end - start)/2;
    }
    return - 1;
}

int search(vector<int>& nums , int target){

    int n = nums.size();
    int pivotIndex = finPivotIndex(nums);
    int ans = -1;

    if(target >= nums[0] && target <= nums[pivotIndex]){
        ans = binarySearch(nums, 0 , pivotIndex,target);
    }else{
        ans = binarySearch(nums, pivotIndex+1, n - 1, target);
    }
    return ans;
}


int main()
{
    vector<int>nums = {12,14,16,2,4,6,8,10};
    // int pivotIndex = finPivotIndex(nums);
    // cout<<"Pivot Index is : "<<pivotIndex<<endl;

    int target = 10;
    int ans = search(nums, target);
    cout<<"Ans is : "<<ans<<endl;

    

}