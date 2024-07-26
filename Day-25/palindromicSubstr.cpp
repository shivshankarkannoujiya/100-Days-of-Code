#include<iostream>
using namespace std;


int expand(string s, int i, int j){

    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}


int countSubstring(string s){

    int totalCount = 0;
    
    for(int i = 0; i < s.length(); i++){

        // Odd 
        int j = i;
        int oddAns = expand(s,i,j);

        // Even
        j = i + 1;
        int evenAns = expand(s, i, j);

        totalCount = totalCount + oddAns + evenAns;
    }
    
    return totalCount;
}



int main()
{
    string s = "aaa";
    int totalPalindromicSubString = countSubstring(s);
    cout<<"Total : "<<totalPalindromicSubString<<endl;
}