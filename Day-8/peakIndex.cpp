#include<iostream>
#include<vector>
using namespace std;


int findPeakIndex(vector<int>& nums){

    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(nums[mid] < nums[mid + 1]){
            start =  mid + 1; 
        }else{
            end = mid;
        }

        mid = start + (end - start)/2;
    }

    return start;
}

int main()
{
    vector<int>nums = {10,20,30,90,70,60,50,40};
    int peakIndex = findPeakIndex(nums);
    cout<<"Peak Index is : "<<peakIndex<<endl;
}