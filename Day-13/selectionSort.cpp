#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& nums){
    int n = nums.size();

    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(nums[j] < nums[minIndex]){
                minIndex = j;
            }
        }
        // swap
        swap(nums[i],nums[minIndex]);
    }
}

void printArray(vector<int>& nums){
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main()
{
    vector<int>nums{5,4,3,2,1};
    selectionSort(nums);
    printArray(nums);
}