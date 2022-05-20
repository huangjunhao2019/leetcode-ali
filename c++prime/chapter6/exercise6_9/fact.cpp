#include<iostream>
#include"chapter6.h"
using namespace std;
int fact(int val){
    if(val==0 || val==1){
        return 1;
    }
    else{
        return val*fact(val-1);
    }
}
int func(){
    int n,ret=1;
    cout<<"input a number: "<<endl;
    cin>>n;
    while(n>1){
        ret*=n--;
    }
    cout<<"Hello, world"<<endl;
    return ret;
}