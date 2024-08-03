#include<iostream>
#include<vector>
using namespace std;

void printExtreme(vector<int>& arr){
    
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        if (low == high)
        {
            cout<<arr[low]<<" ";
            return;
        }else{
            cout<<arr[high]<<" "<<arr[low]<<" ";
            low++;
            high--;
        }
    }
}

int main()
{
    vector<int>arr{10,20,30,40,50,60,70};
    printExtreme(arr);
}