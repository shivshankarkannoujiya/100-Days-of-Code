#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& nums){
    int n = nums.size();

    for(int round = 1;  round<n; round++){

        bool isSwapped = false;
        for(int j = 0; j<n-round; j++){
            if(nums[j] > nums[j+1]){
                isSwapped = true;
                swap(nums[j],nums[j+1]);
            }
        }
        if(isSwapped == false){
            break;
        }
    }
}

void printArray(vector<int>& nums){
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int>nums{10,1,7,6,14,9};
    bubbleSort(nums);
    printArray(nums);

}