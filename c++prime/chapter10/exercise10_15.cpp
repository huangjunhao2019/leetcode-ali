#include<iostream>
using namespace std;
int main(){
    int x=10;
    auto f=[x](int i){
        return x+i;
    };
    cout<<f(12)<<endl;
    return 0;
}