#include<iostream>
using namespace std;

string reverseOnlyLetters(string s){

    int i = 0; 
    int j = s.size()-1;

    while (i < j)
    {
        if (isalpha(s[i]) && isalpha(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;
        }else if(!isalpha(s[i])){
            i++;
        }else{
            j--;
        } 
    }
    
    return s;
}


int main()
{
    string s = "Test1ng-Leet=code-Q!";
    string ans = reverseOnlyLetters(s);
    cout<<"Ans is : "<<ans<<endl;
}