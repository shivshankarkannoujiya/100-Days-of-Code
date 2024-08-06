#include<iostream>
#include<limits.h>
using namespace std;


int getMinNumber(int arr[][4], int row, int col){
    int minNum = INT_MAX;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if (arr[i][j] < minNum)
            {
                minNum = arr[i][j];
            }
            
        }
    }

    return minNum;
}


int getMaxNumber(int arr[][4], int row, int col){
    int maxNum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxNum)
            {
                maxNum = arr[i][j];
            }
            
        }
        
    }
    
    return maxNum;
}


int main()
{
    int arr[][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,11,12,20}
    };

    int row = 3;
    int col = 4;

    int minimumNumber  = getMinNumber(arr,row, col);
    int maximumNumber  = getMaxNumber(arr,row,col);

    cout<<"Minimum Number is : "<<minimumNumber<<endl;
    cout<<"Maximum Number is : "<<maximumNumber<<endl;

}