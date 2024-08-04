#include<iostream>
#include<vector>
using namespace std;

void shiftArrElementByOne(vector<int>& arr){
    int lastElement = arr[arr.size()-1];
    for(int i = arr.size()-1; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = lastElement;
}

void printArr(vector<int>& arr){
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>arr{1,2,3,4,5,6};
    shiftArrElementByOne(arr);
    printArr(arr);
}