#include<iostream>
#include<vector>
using namespace std;

void sortZerosOnes(vector<int>& arr){

    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == 0){
            zeroCount++;
        }else if(arr[i] == 1){
            oneCount++;
        }
    }

    // Placing into Array
    int index = 0;
    while(zeroCount--){
        arr[index] = 0;
        index++;
    }

    while(oneCount--){
        arr[index] = 1;
        index++;
    }

}

void printArr(vector<int>& arr){
    for(auto it : arr){
        std::cout<<it<<" ";
    }
    std::cout<<endl;
}



int main()
{
    vector<int>arr{1,0,0,1,1,0,1,0,1};
    sortZerosOnes(arr);
    printArr(arr);
    
}