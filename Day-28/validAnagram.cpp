#include<iostream>
#include<algorithm>
using namespace std;

// Brute force Approach TC = O(nlogn)
bool isAnagramBruteForece(string s, string t){

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    (s == t) ? true : false;
}


int main(){

    string s = "anagram";
    string t = "nagaram";
    bool ans = isAnagramBruteForece(s,t);
    
    if (ans == true)
    {
        cout<<"Valid Anagram"<<endl;
    }else{
        cout<<"Invalid Anagram"<<endl;
    }
    
}