#include<iostream>
using namespace std;


string decodeMessage(string key, string message){

    // mapping
    char start = 'a';
    char mapping[300] = {0};

    for(auto ch : key){
        
        if (ch != ' ' && mapping[ch]==0)
        {
            mapping[ch] = start;
            start++;
        }
    }

    // Using mapping 
    string ans;

    for(auto ch : message){

        if (ch == ' ')
        {
            ans.push_back(' ');
        }else
        {
            char decodedChar = mapping[ch];
            ans.push_back(decodedChar);
        } 
        
    }

    return ans;
}

int main()
{
    string key = "this quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    string decodedMessage = decodeMessage(key,message);
    cout<<"Message is : "<<decodedMessage<<endl;

}

// Output: Message is : this is a secret