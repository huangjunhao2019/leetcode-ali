#include<iostream>
#include<typeinfo>
#include<string>
#include<map>
#include<set>
using namespace std;
int main(){
    set<string>::value_type v1;
    set<string>::key_type v2;
    map<string,int>::value_type v3;
    map<string,int>::key_type v4;
    string v5;
    cout<<typeid(v1).name()<<endl;
    cout<<typeid(v2).name()<<endl;
    cout<<typeid(v3).name()<<endl;
    cout<<typeid(v4).name()<<endl;
    cout<<typeid(v5).name()<<endl;
    return 0;
}