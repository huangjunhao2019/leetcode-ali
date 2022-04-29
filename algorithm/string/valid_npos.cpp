#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=string::npos;
    size_t b=string::npos;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    string c="lalala";
    cout<<c.max_size()<<endl;
    return 0;
}