#include<iostream>
using namespace std;
int main(){
    int *pia=new int[1000000];
    for(int i=0;i<1000000;++i){
       // if(i%50==0){
           // cout<<endl;
       // }
        if(pia[i]!=0){
            cout<<"not zero "<<pia[i]<<endl;
            break;
        }
        //cout<<pia[i]<<" ";
    }
    return 0;
}