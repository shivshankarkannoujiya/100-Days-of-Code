#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


int getMinElement(vector<int>& arr){


    // Corner case
    if(arr.empty()){
        throw std::runtime_error("ERROR : Array is Empty");
    }

    int minElement = INT_MAX;

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] < minElement){
            minElement = arr[i];
        }
    }

    return minElement;
}


int getMaxElement(vector<int>& arr){

    int size = arr.size();
    int maxElement = INT_MIN;

    // Corner Case : Empty Arr
    if (arr.empty()){
        throw std::runtime_error("Array is Empty");
    }

    for(int i = 0; i<size; i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
        }
    }
    
    return maxElement;
}

int main()
{
    vector<int>arr = {1,4,-5,10,2,11,0,3,-1,-5,11};
    int minNumber = getMinElement(arr);
    cout<<"Min Number is : "<<minNumber<<endl;

    int maxNumber = getMaxElement(arr);
    cout<<"Max Number is : "<<maxNumber<<endl;


}