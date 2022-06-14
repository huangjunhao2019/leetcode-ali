#include<iostream>
using namespace std;
int main(){
    int i=42;
    int &r=i;
    int &&rr2=i*42;
    rr2=3;
    cout<<r<<" "<<rr2<<" "<<i*42<<endl;
    return 0;
}