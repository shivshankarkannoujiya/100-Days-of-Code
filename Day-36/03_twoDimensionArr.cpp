#include<iostream>
using namespace std;

void printTwoDimensionalArr(int arr[][4], int row, int col ){

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    //  TODO: Array Creation
    // int arr[4][5];

    // TODO: Array Initialization
    
    // int arr[2][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8}
    // };

    // int arr1[][4] = {
    //     {1,2,3,4},
    //     {5,6,7,9}
    // };

    //TODO: Accessing Elements
    // std::cout<<arr1[0][2]<<endl;


    // TODO: Print 2D Array Row-wise
    // int row = 2;
    // int col = 4;
    // for(int i = 0; i<row; i++){
    //     for(int j = 0; j<col; j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // TODO: Print 2D Array Col-wise
    int arr2[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    // int row = 3;
    // int col = 4;
    // for(int i = 0; i<col; i++){
    //     for(int j = 0; j<row; j++){
    //         cout<<arr2[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }


    // TODO: Take Input Row and Col Wise
    int arr[3][4];
    int row = 3; 
    int col = 4;

    //! Row Wise 
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"Enter Element at "<<"["<<i<<"]"<<" "<<"["<<j<<"]"<<" : ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //! Col wise
    for(int i = 0; i<col; i++){
        for(int j = 0; j<row; j++){
            cout<<"Enter Element at "<<"["<<j<<"]"<<" "<<"["<<i<<"]"<<" : ";
            cin>>arr[j][i];
        }
        cout<<endl;
    }

    printTwoDimensionalArr(arr,row,col);
    
}