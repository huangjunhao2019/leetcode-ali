#include<iostream>
using namespace std;
void fun(){
    static int val=0;
    val++;
    cout<<val<<endl;
}
int main(){
    for(int i=0;i<10;i++){
        fun();
    }
    return 0;
}