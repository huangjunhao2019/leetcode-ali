#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
int main(){
    int val1,val2;
    while(cin>>val1>>val2){
        //try{
            if(val2==0){
                throw runtime_error("The second val can not be zero!");
            }
            cout<<val1/val2<<endl;
        //}
    }
    return 0;
}