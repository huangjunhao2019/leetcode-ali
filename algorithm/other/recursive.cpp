#include<iostream>
using namespace std;
static int num=0;
int fib(int n){
    num++;
    if(n==0 || n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n=5;
    int m=fib(n);
    return 0;
}