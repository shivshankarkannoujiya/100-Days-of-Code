#include<iostream>
using namespace std;

// TODO: Write a function to print the sum of each row of 2D Array 
void printRowSum(int arr[][3], int row, int col){
    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout<<"Sum of Row "<<i<<" is "<<" : "<<sum<<endl;
    }
}

// TODO: Write a function to print the col sum 
void printColSum(int arr[][3], int row, int col){
    for(int i = 0; i<col; i++){

        int sum = 0;

        for(int j = 0; j<row; j++){
            sum = sum + arr[j][i];
        }
        cout<<"Sum of Col "<<i<<" is "<<" : "<<sum<<endl;
    }
}

int main()
{
    int arr[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int row = 3;
    int col = 3;
    printRowSum(arr,row,col);
    cout<<endl;
    printColSum(arr,row,col);
    
}