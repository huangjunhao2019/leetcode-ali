#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int num=10;
    ofstream out("./fileOut",ofstream::out | ofstream::app);
    for(int i=0;i<10;i++){
        out<<i<<endl;
    }
    return 0;
}