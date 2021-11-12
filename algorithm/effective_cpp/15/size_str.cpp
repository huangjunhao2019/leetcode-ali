#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="h";
    cout<<sizeof(str)<<endl;
    cout<<str.size()<<endl;
    string str2="hu";
    cout<<sizeof(str2)<<endl;
    cout<<str2.size()<<endl;
    return 0;
}