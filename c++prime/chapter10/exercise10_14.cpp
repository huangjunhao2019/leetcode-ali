#include<iostream>
using namespace std;
int main(){
    auto f=[](int x,int y){
        return x+y;
    };
    int x,y;
    while(cin>>x>>y){
        cout<<f(x,y)<<endl;
    }
    return 0;
}