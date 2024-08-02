#include<iostream>
using namespace std;

void countZerosOnes(int arr[], int size){

    int zeroCount = 0;
    int oneCount =  0;

    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else if(arr[i] == 1){
            oneCount++;
        }
    }

    cout<<"Total Zeros : "<<zeroCount<<endl;
    cout<<"Total Ones : "<<oneCount<<endl;
}

int main()
{
    int arr[] = {0,0,0,1,1,1,0,1,0,1,0,1,1,1,0,1};
    int totalElement = sizeof(arr)/sizeof(int);
    countZerosOnes(arr,totalElement);
}