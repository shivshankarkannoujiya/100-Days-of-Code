#include<iostream>
#include<vector>
using namespace std;

void printAllSubArrays(vector<int>& nums){
    int n = nums.size();
    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            
            for(int i = start; i<=end; i++){
                cout<<nums[i]<<" ";
            }
            cout<<endl;
        }
        
    }
}


void printSumOfAllSubArrays(vector<int>& nums){
    for(int start = 0; start<nums.size(); start++){
        for(int end = start; end<nums.size(); end++){

            int sum = 0;
            for(int i = start; i<=end; i++){
                sum = sum+nums[i];
            }
            cout<<sum<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    vector<int>nums{1,2,3,4,5};
    // printAllSubArrays(nums);
    printSumOfAllSubArrays(nums);

}