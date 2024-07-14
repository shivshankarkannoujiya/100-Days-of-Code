#include<iostream>
#include<vector>
using namespace std;


void insertionSort(vector<int>& v){
    int n = v.size();
    for(int i = 1; i<n; i++){

        int key = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        // shifting done 
        v[j+1] = key;
    }
}

void printArray(vector<int>& v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int>v{5,4,3,2,1};
    insertionSort(v);
    printArray(v);
    
}