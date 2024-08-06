#include<iostream>
using namespace std;

bool linearSearch(int arr[][4], int row, int col,  int target){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if (arr[i][j] == target)
            {
                return true;
            }
            
        }
    }

    return false;
}

int main()
{
    int arr[][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };

    int row = 3;
    int col = 4;
    int target = 12;
    bool ans = linearSearch(arr, row,col,target);
    if (ans == true)
    {
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    
}