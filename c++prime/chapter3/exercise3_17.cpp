#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
int main(){
    vector<string> strVec;
    string s;
    while(cin>>s){
        strVec.push_back(s);
    }
    for(auto &v:strVec){
        for(auto &ch:v){
            ch=toupper(ch);
        }
    }
    for(auto &v:strVec){
        cout<<v<<endl;
    }
    return 0;
}