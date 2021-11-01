#include<iostream>
using namespace std;
//ch就是一个变量，每次都赋给不同的值，是值传递，不是地址传递
int main(){
    string s="abc";
    for(auto ch:s){
        cout<<ch<<endl;
    }
    return 0;
}