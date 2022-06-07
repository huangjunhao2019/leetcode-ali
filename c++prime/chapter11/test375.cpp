#include<iostream>
#include<fstream>
#include<map>
using namespace std;
int main(){
    ifstream ifs("./book.txt");
    map<string,int> wordCount;
    string word;
    while(ifs>>word){
        ++wordCount[word];
    }
    for(const auto &w:wordCount){
        cout<<w.first<<" occurs "<<w.second<<endl;
    }
    return 0;
}