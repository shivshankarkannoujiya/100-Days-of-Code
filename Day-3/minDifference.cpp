#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;


int minDifference(vector<int>& nums){
    if(nums.size() <= 4){
        return 0;
    }

    // Sort
    sort(nums.begin(), nums.end());
    int size = nums.size();

    // we have to get the min value 
    int ans = INT_MAX;

    // case 1
    ans = min(ans , nums[size-4] - nums[0]);

    // case 2
    ans = min(ans , nums[size-3] - nums[1]);

    // case 3
    ans = min(ans , nums[size-2] - nums[2]);

    // case 4
    ans = min(ans , nums[size-1] - nums[3]);

    return ans;
}

int main()
{
    vector<int>arr  = {0,4,6,7,2,19,11,15};

    int minimumDifference = minDifference(arr);
    cout<<"Min Differece is : "<<minimumDifference<<endl;
}