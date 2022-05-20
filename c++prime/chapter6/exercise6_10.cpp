#include<iostream>
using namespace std;
void change(int *p,int *q){
    int num=*p;
    *p=*q;
    *q=num;
}
int main(){
    int n=10,m=20;
    int *p=&n,*q=&m;
    change(p,q);
    cout<<*p<<" "<<*q<<endl;
    return 0;
}