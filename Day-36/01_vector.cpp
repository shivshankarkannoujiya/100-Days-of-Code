#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int>& arr){

    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
    //! Dynamic Array
    // int n = 100;
    // int *arr = new int[n];

    //! Vector
    // vector<int>v;

    // Pushing Elements 
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // cout<<"Size is : "<<v.size()<<endl;
    // cout<<"Capacity is : "<<v.capacity()<<endl;

    //! Taking Input using Loop 
    // vector<int>arr;

    // for(int i = 0; i<5; i++){
    //     int data;
    //     cin>>data;
    //     arr.push_back(data);
    // }

    //! Printing Vector
    // for(auto it:arr){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    // for(int i = 0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    //     cout<<arr.at(i);
    // }




    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);


    // cout<<"Printing Before Deleting : ";
    // printArr(arr1);

    // ! Delete last Element
    // arr1.pop_back();

    // cout<<"Printing After Deleting : ";
    // printArr(arr1);

    //! Clear the Vector 
    // size = 0
    // Capacity != 0
    cout<<"Size Before Clear : "<<arr1.size()<<endl;
    cout<<"Capacity Before Clear : "<<arr1.capacity()<<endl;

    // Clear the Vector 
    arr1.clear();

    cout<<"Size After Clear : "<<arr1.size()<<endl;
    cout<<"Capacity After Clear : "<<arr1.capacity()<<endl;


}