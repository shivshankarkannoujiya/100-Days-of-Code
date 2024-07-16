#include<iostream>
#include<vector>
using namespace std;


// Brute Force Approach
vector<int> prefixSum(vector<int>& nums){
    int n = nums.size();
    vector<int>pf(n);
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = 0; j <= i;  j++){
            sum = sum+nums[j];
        }
        pf[i] = sum;
    }
    return pf;
}

vector<int> prefixOptimal(vector<int>& nums){

    int n = nums.size();
    vector<int>pf(n);

    pf[0] = nums[0];

    for(int i = 1; i<n; i++){
        pf[i] = pf[i - 1] + nums[i];
    }

    return pf;
}


// Printing Array
void printArray(vector<int>& nums){
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main()
{
    vector<int>nums{4,1,5,-2,7};
    // vector<int>prefixArray = prefixSum(nums);
    vector<int>prefixArray = prefixOptimal(nums);
    printArray(prefixArray);
    
}