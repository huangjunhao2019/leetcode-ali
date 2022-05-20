#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    string pre="";
    bool flag=false;
    while(cin>>s){
        if(s==pre){
            flag=true;
            break;
        }
        else{
            pre=s;
        }
    }
    if(flag){
        cout<<s<<endl;
    }
    else{
        cout<<"just cin end"<<endl;
    }
    return 0;
}