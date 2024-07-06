#include<iostream>
#include<vector>
using namespace std;


void reverseRow(vector<int>& Arrayrow){

    int i = 0;
    int j = Arrayrow.size()-1;
    while(i<=j){
        swap(Arrayrow[i],Arrayrow[j]);
        i++;
        j--;
    }
}

void rotateImage(vector<vector<int>>& matrix){

    // step-1 Transpose
    int n = matrix.size();
    for(int i = 0; i<n; i++){
        for(int j = i; j<matrix[i].size(); j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    // Step-2 Reverse Rows
    for(int i = 0; i<n; i++){
        reverseRow(matrix[i]);
    }
}


// Printing 
void printMatrix(vector<vector<int>>& matrix){
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}



int main()
{
    vector<vector<int> >matrix = {
            {1,2,3},
            {4,5,6},
            {7,8,9},
    }; 

    // Calling function
    rotateImage(matrix);
    printMatrix(matrix);
}

