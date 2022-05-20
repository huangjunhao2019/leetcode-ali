#include<iostream>
#include<string>
using namespace std;
bool func1(const string &s);
void change(string &s);
int main(){
    string s="HelloWorld";
    cout<<func1(s)<<endl;
    change(s);
    cout<<s<<endl;
    return 0;
}
bool func1(const string &s){
    for(auto ch:s){
        if(ch>='A' && ch<='Z'){
            return true;
        }
    }
    return false;
}
void change(string &s){
    for(auto &ch:s){
        if(ch>='A' && ch<='Z'){
            ch=ch+'a'-'A';
        }
    }
}