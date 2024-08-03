#include<iostream>
#include<vector>
using namespace std;

void reverseArrayBruteForce(vector<int>& arr){

    vector<int>temp(arr.size());
    int index = 0;
    int j = arr.size();

    while (j--)
    {
        temp[index] = arr[j];
        index++;
    }
    arr = temp;

    // print Array
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}


void reverseArrayTwoPinter(vector<int>& arr){

    int size = arr.size();
    int i = 0; 
    int j = size - 1;

    if (arr.empty())
    {
        cout<<"Array is Empty !"<<endl;
        return;
    }
    

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    } 
}

void printArray(vector<int>& arr){
    for(auto element : arr){
        cout<<element<<" ";
    }
}

int main()
{
    vector<int>arr{1,2,3,4,5,6};
    // reverseArrayBruteForce(arr);
    reverseArrayTwoPinter(arr);
    printArray(arr);

}