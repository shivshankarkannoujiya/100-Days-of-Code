#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


vector<int> rowAndMaxOnes(vector<vector<int>>& mat){

    vector<int>ans;
    int n = mat.size();
    int oneCount = INT_MIN;
    int rowNum = -1;

    for(int i = 0; i<n; i++){
        int count  = 0;
        for(int j = 0; j<mat[i].size(); j++){
            if(mat[i][j] == 1){
                count++;
            }
        }

        if(count>oneCount){
            oneCount = count;
            rowNum = i;
        }
    }

    ans.push_back(rowNum);
    ans.push_back(oneCount);

    return ans;
    
}

int main()
{ 

    vector<vector<int>> mat = {
            {1,0,0,0},
            {1,1,0,0},
            {0,0,1,1},
            {1,1,1,1},
    };  

    vector<int> maxOne = rowAndMaxOnes(mat);
    for(int i = 0; i<maxOne.size(); i++){
        cout<<maxOne[i]<<" ";
    }
}