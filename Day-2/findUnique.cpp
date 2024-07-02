#include<iostream>
using namespace std;

int findUniqueElement(int arr[], int size){
    int ans = 0; 
    for(int i =0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,1,2,3};
    int size = sizeof(arr)/sizeof(int);

    int uniqueElement =  findUniqueElement(arr,size);
    cout<<"Unique Element is : "<<uniqueElement<<endl;
}