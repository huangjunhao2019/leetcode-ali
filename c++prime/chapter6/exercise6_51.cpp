#include<iostream>
using namespace std;
void f(){
    cout<<"f void"<<endl;
}
void f(int num){
    cout<<"f one int"<<endl;
}
void f(int a,int b){
    cout<<"f two int"<<endl;
}
void f(double a,double b=3.14){
    cout<<"f two double"<<endl;
}
int main(){
    f(42);
    f(42,0);
    f(2.56,3.14);
    return 0;
}