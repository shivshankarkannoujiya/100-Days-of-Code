#include<iostream>
using namespace std;

void printDIagonalBruteForce(int arr[][3], int row, int col){

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if (i == j)
            {
                cout<<arr[i][j]<<" ";
            }
        }

        cout<<endl;
    }
}

void printDiagonalOptimal(int arr[][3], int row){
    for(int i = 0; i<row; i++){
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;
}

void printReverseDiagonal(int arr[][4], int row, int col){
    int colSize =sizeof(arr[0])/sizeof(int);
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if((i+j) == colSize - 1){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}


int getDiagonalSum(int arr[][4], int row){
    int sum = 0;
    for(int i = 0; i<row; i++){
        sum = sum+arr[i][i];
    }
    return sum;
}

int main()
{
    int arr[][4] = {
        {1,2,3,4},
        {4,5,6,4},
        {7,8,9,4},
        {7,8,9,4},
    };

    int row = 4;
    int col = 4;
    // printDIagonalBruteForce(arr, row, col);
    // printDiagonalOptimal(arr,row);

    // cout<<sizeof(arr[0])/sizeof(int)<<endl;
    // cout<<sizeof(arr)<<endl;
    // printReverseDiagonal(arr, row,col);

    int diagonalSum = getDiagonalSum(arr,row);
    cout<<"Diagonal Sum is: "<<diagonalSum<<endl;
    
}