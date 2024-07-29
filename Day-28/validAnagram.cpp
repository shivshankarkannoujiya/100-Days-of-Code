#include<iostream>
#include<algorithm>
using namespace std;

// Brute force Approach TC = O(nlogn)
bool isAnagramBruteForece(string s, string t){

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    (s == t) ? true : false;
}

bool isAnagramOptimal(string s, string t){

    int frequencyTable[256] = {0};

    for(int i = 0; i<s.size(); i++){
        char ch = s[i];
        frequencyTable[ch]++;
    }

    for(int i = 0; i<t.size(); i++){
        char ch = t[i];
        frequencyTable[ch]--;
    }

    for(int i = 0; i<256; i++){
        if (frequencyTable[i] != 0)
        {
            return false;
        }
        
    }

    return true;
}


int main(){

    string s = "anagram";
    string t = "nagaram";
    // bool ans = isAnagramBruteForece(s,t);
    bool ans = isAnagramOptimal(s,t);
    
    if (ans == true)
    {
        cout<<"Valid Anagram"<<endl;
    }else{
        cout<<"Invalid Anagram"<<endl;
    }
    
}