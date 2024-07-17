#include<iostream>
#include<vector>
using namespace std;


vector<int> prefixMax(vector<int>& nums){

    int n = nums.size();
    vector<int>pMax(n);

    // 0th : Index 
    pMax[0] = nums[0];

    // Now we will start from the index -> 1
    for(int i = 1; i<n; i++){
        pMax[i] = max(pMax[i-1],nums[i]);
    }

    return pMax;
}

vector<int> suffixMax(vector<int>& nums){

    int n = nums.size();
    vector<int>sMax(n);

    // last index
    sMax[n-1] = nums[n-1];

    // Now we  will start from the 2nd last index
    for(int i = n-2; i>=0; i--){
        sMax[i] = max(sMax[i+1],nums[i]);
    }

    return sMax;
}

int trapRainWater(vector<int>& height){
    
    int n = height.size();

    // Calculate the prefixMax and SuffixMax Array 
    vector<int>Pmax = prefixMax(height);
    vector<int>Smax = suffixMax(height);

    int amount = 0;
    for(int i = 1; i<n-1; i++){

        int lb = Pmax[i-1];
        int rb = Smax[i+1];
        int yb = min(lb,rb);
        int contri = yb - height[i];

        if(contri > 0){
            amount = amount + contri;
        }
    }

    return amount;

}


int main()
{
    vector<int>height{2,1,3,2,1,2,4,3,2,1,3,1};
    int trappedRainWater = trapRainWater(height);
    cout<<"Ans is : "<<trappedRainWater<<endl;
}