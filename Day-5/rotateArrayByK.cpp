#include<iostream>
#include<vector>
using namespace std;


void rotateByK(vector<int>& nums, int k){
    int n = nums.size();
    vector<int>ans(n);
    for(int i = 0; i<n; i++){
        int newIndex = (i+k)%n;
        ans[newIndex] = nums[i];
    }
    nums = ans;
}

void printArray(vector<int>& nums){
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main()
{
    vector<int>nums = {10,20,30,40,50,60};
    int k = 2;
    rotateByK(nums,k);
    printArray(nums);
}