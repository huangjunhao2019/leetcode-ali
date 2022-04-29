#include<iostream>
#include<string> 
using namespace std;
int main(){
    string a="nihaoma";
    string b="hao";
    string c="ma";
    cout<<a.find(b)<<endl;
    if(b.find(c)==-1){
        cout<<"not found"<<endl;
    }
    if(b.find(c)==string::npos){
        cout<<"not found 2"<<endl;
    }
    if(string::npos==-1){
        cout<<"not found 3"<<endl;
    }
    int d=string::npos;
    size_t e=string::npos;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<string::npos<<endl;
    return 0;
}
