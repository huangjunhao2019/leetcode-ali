#include<iostream>
#include<string>
using namespace std;
char &getVal(string &str,int ix){
    return str[ix];
}
int main(){
    string s="a value";
    cout<<s<<endl;
    getVal(s,0)='A';
    cout<<s<<endl;
    return 0;
}