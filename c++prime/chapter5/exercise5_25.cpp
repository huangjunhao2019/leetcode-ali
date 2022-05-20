#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
int main(){
    int val1,val2;
    while(cin>>val1>>val2){
        try{
            if(val2==0){
                throw runtime_error("The second argument can not be zero");
                //cout<<val1/val2<<endl;
            }
            cout<<val1/val2<<endl;
        }
        catch(runtime_error err){
            cout<<err.what()<<"\n Try again? Enter y or n"<<endl;
            char ch;
            cin>>ch;
            if(!cin || ch=='n'){
                break;
            }
        }
    }
    return 0;
}