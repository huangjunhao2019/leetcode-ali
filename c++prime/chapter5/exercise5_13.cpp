#include<iostream>
#include<string> 
using namespace std;
int  main(){
    int num;
    const int case1=1;
    while(cin>>num){
        switch (num)
        {
        case case1:
            cout<<num<<endl;
            break;
        
        default:
            break;
        }
    }
    return 0;
}