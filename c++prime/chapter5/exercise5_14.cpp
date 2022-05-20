#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="";
    string pre="";
    int count=0;
    int resNum=0;
    string resStr="";
    while(cin>>s){
        if(s==pre){
            count++;
        }
        else{
            pre=s;
            count=1;
        }
        if(count>resNum){
            resNum=count;
            resStr=s;
        }
    }
    cout<<resNum<<" "<<resStr<<endl;
    return 0;
}