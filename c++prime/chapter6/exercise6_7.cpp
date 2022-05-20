#include<iostream>
using namespace std;
int countCalls(){
    static int cnr=0;
    return cnr++;
}
int main(){
    for(int i=0;i<10;i++){
        cout<<countCalls()<<endl;
    }
    return 0;
}