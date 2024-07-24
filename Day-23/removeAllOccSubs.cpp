#include<iostream>
using namespace std;

string removeOccurences(string s, string part){

    while (s.find(part) != string::npos)
    {
        // mean part exist in string 
        // remove
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    string ansString = removeOccurences(s,part);
    cout<<"Ans is : "<<ansString<<endl;
}