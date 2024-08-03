#include<iostream>
#include<vector>
using namespace std;

int getUniqueElement(vector<int>& arr){

    int ans = 0;
    for(int i = 0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    vector<int>arr{10,5,10,1,5,20,20,30,30,1,2};
    int uniqueElement = getUniqueElement(arr);
    cout<<"Unique Eleement is : "<<uniqueElement<<endl;
}