#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        (arr[i] == target) ? true : false;
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int target = 50;
    int size = sizeof(arr)/sizeof(int);

    bool isTargetFound = linearSearch(arr,size,target);
    if (isTargetFound)
    {
        cout<<"Target Found"<<endl;
    }else{
        cout<<"Target Not Found"<<endl;
    }
}