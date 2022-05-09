#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    string s2;
    while(cin>>s1>>s2){
        if(s1==s2){
            cout<<"Equal"<<endl;
        }
        else{
            cout<<(s1>s2?s1:s2)<<endl;
            cout<<(s1.size()>s2.size()?s1:s2)<<endl;
        }
    }
    return 0;
}