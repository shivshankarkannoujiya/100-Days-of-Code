#include<iostream>
#include<vector>
using namespace std;

void createMappingAndUpdateString(string& str){

    char start = 'a';
    char mapping[300] = {0};

    for(auto ch : str){
        if(mapping[ch] == 0){
            mapping[ch] = start;
            start++;
        }
    }

    // update string with mapping string 
    for(int i = 0; i<str.length(); i++){
        char ch = str[i];
        str[i] = mapping[ch];
    }
}


vector<string> findAndReplacePattern(vector<string>& words, string pattern){

    vector<string>ans;
    createMappingAndUpdateString(pattern);

    for(string s : words){

        string tempString = s;
        createMappingAndUpdateString(tempString);
        if (pattern == tempString)
        {
            ans.push_back(s);
        }
        
    }

    return ans;
}


int main()
{
    vector<string>words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb"; 

    vector<string>Ans = findAndReplacePattern(words,pattern);

    for(auto str : Ans){
        cout<<str <<" ";
    }
}