#include<iostream>
#include<vector>
using namespace std;

int getMissing(vector<int>& nums){
    int n = nums.size();
    int arrSum = 0;
    for(int i = 0; i<n; i++){
        arrSum = arrSum + nums[i];
    }

    int totalSum = n*(n+1)/2;
    int ans = totalSum - arrSum;
    
    return ans;
}

int main()
{
    vector<int>nums = {1,0,2,3,5,6,7,8};
    int missingNumber = getMissing(nums);
    cout<<"Missing Number is : "<<missingNumber<<endl;
}