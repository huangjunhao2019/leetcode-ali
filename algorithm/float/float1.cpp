#include<iostream>
using namespace std;
int main(){
    float sum=0;
    for(int i=0;i<1000;i++){
        sum+=0.1;
    }
    cout<<sum<<endl;
    return 0;
}