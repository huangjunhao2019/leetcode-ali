#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        int ret=1<<i;
        cout<<i<<" "<<ret<<endl;
    }
    return 0;
}