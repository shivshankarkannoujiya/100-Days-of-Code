#include<iostream>
#include<vector>
using namespace std;

void printSubArray(vector<int>& nums, int startIndex, int endIndex){
    for(int i = startIndex; i<=endIndex; i++){
        cout<<nums[i]<<" ";
    }
}

int main()
{
    vector<int>nums{1,2,3,4,5};
    int start = 1;
    int end = 3;
    printSubArray(nums,start,end);
}