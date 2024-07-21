#include<iostream>
#include<string.h>
using namespace std;


bool isPalindrome(char ch[], int len){
    int i = 0;
    int j = len - 1;

    while(i <= j){
        if(ch[i] == ch[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }

    return true;
    
}

int main()
{
    char ch[100];
    int len = strlen(ch);

    cout<<"Enter the values : ";
    cin>>ch;

    bool Ans = isPalindrome(ch,len);

    if (Ans == true)
    {
        cout<<"Valid Palindrome"<<endl;
    }else{
        cout<<"Not a Palindrome"<<endl;
    }
    
}