#include<iostream>
#include<vector>
using namespace std;


vector<int> productExceptItself(vector<int>& nums){
    int n = nums.size();
    vector<int>prefixProduct(n);

    // get the prefix Product
    prefixProduct[0] = nums[0];
    for(int i = 1; i<n; i++){
        prefixProduct[i] = prefixProduct[i - 1] * nums[i];
    }

    //! Got Prefix Product, Now we wants 2 things
    // 1. leftSideProduct >> Will get from the prefixProduct[]
    // 2. rightSideProduct >> create a Variable and maintain the rightSideProduct

    int suffix = 1; 
    for(int i = n-1; i>0; i--){
        prefixProduct[i] = prefixProduct[i-1]*suffix;
        suffix = suffix * nums[i];
    }

    //! got the ans till {n-1 to 1}
    // Manage the 0th Index
    prefixProduct[0] = suffix;
    
    return prefixProduct;
}


void printArray(vector<int>& nums){
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main()
{
    vector<int>nums{1,2,3,4};
    vector<int>ans = productExceptItself(nums);
    printArray(ans);

}