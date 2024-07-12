#include<iostream>
#include<vector>
using namespace std;

int bsInNearlySortedArray(vector<int>& nums, int target){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low)/2;

    while(low <= high){
        if(mid - 1 >= 0 && nums[mid - 1] == target){
            return mid - 1;
        }
        if(nums[mid] == target){
            return mid;
        }
        if(mid + 1 < n && nums[mid + 1] == target){
            return mid + 1;
        }

        if(target > nums[mid]){
            low = mid + 2;
        }else{
            high = mid - 2;
        }

        mid = low + (high - low)/2;
    }

    return -1;
}

int main()
{
    vector<int>nums = {20,10,30,50,40,70,60};
    int target =  70;
    int ansIndex = bsInNearlySortedArray(nums,target);
    if(ansIndex == -1){
        cout<<"Element is Not Present"<<endl;
    }else{
        cout<<"Element Found at index : "<<ansIndex<<endl;
    }
}