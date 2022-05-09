#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s="Hello, World!!!";
    for(auto &ch:s){
        ch=toupper(ch);
    }
    cout<<s<<endl;
    return 0;
}