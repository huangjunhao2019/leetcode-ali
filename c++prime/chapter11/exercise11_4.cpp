#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<cctype>
using namespace std;
int main(){
    ifstream ifs("./book.txt");
    map<string,int> wordCount;
    string word;
    while(ifs>>word){
        string newWord="";
        for(auto &ch:word){
            ch=tolower(ch);
            if(ch>='a' && ch<='z'){
                newWord.push_back(ch);
            }
        }
        //word.erase(remove_if(word.begin(),word.end(),ispunct),word.end())
        wordCount[newWord]++;

    }
    for(const auto &w:wordCount){
        cout<<w.first<<" occurs "<<w.second<<endl;
    }
    return 0;
}