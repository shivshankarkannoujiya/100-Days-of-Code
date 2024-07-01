#include<iostream>

bool linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i]==target){
            return true;
        }
    }

    return false;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);

    int target;
    std::cout<<"Enter the value you wnat to find : ";
    std::cin>>target;

    // Calling function
    bool ans = linearSearch(arr,size,target);

    if (ans == true)
    {
        std::cout<<"Target value Found"<<std::endl;
    }else{
        std::cout<<"Target value not Found"<<std::endl;
    }
    
}