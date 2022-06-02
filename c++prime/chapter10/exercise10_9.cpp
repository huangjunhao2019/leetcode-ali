#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
void elimDups(vector<string> &words){
    sort(words.begin(),words.end());
    auto newEnd=unique(words.begin(),words.end());
    words.erase(newEnd,words.end());
}
int main(){
    string s="the quick red fox jumps over the slow red turtle";
    istringstream is(s);
    vector<string> words;
    string word="";
    while(is>>word){
        words.push_back(word);
    }
    elimDups(words);
    for(auto &w:words){
        cout<<w<<" ";
    }
    cout<<endl;
    return 0;
}