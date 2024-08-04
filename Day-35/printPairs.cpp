#include<iostream>
#include<vector>
using namespace std;

void printPairs(vector<int>& arr){

    int size = arr.size();

    if (arr.empty())
    {
        cout<<"Array is empty"<<endl;
    }
    

    for(int i = 0; i<size; i++){

        cout<<"Pairs of index : "<<i<<" ";
        for(int j = i+1; j<size; j++){
            cout<<"( "<<arr[i]<<" , "<<arr[j]<<" )";
        }
        cout<<endl;
    }
}

int main()
{
    vector<int>arr{};
    printPairs(arr);
}