#include<iostream>
using namespace std;

bool isPalindrome(string s, int i , int j){

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }else
        {
            i++;
            j--;
        }
        
    }
    return true;
    
}


bool validPalindrome(string s){

    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            bool ans1 = isPalindrome(s,i+1,j);
            bool ans2 = isPalindrome(s,i,j-1);

            return ans1 || ans2;
        }
        else{

            // s[i] == s[j]
            i++;
            j--;
        }
        
    }

    // valid palindrome
    return true;
    
}

int main()
{
    string s = "abca";
    bool isValidPalindrome = validPalindrome(s);

    if (isValidPalindrome)
    {
        cout<<"Valid Palindrome"<<endl;
    }else{
        cout<<"Not a Valid Palindrome"<<endl;
    }
    
}