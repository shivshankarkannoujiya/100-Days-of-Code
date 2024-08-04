#include<iostream>
#include<vector>
using namespace std;

void printTriplets(vector<int>& arr){

    for(int i = 0; i<arr.size(); i++){
        for(int j = i + 1; j<arr.size(); j++){
            for(int k = j + 1; k<arr.size(); k++){
                cout<<"( "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" )";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    vector<int>arr{1,2,3,4,5};
    printTriplets(arr);
}