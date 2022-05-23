#include<iostream>
#include<fstream>
using namespace std;
void solve(ofstream &out,int num){
    int index=num/2;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(j>=index-i/2 && j<=index+i/2){
                out<<"*";
            }
            else{
                out<<" ";
            }
        }
        out<<endl;
    }
}
int main(){
    int num;
    ofstream out("tri.txt",ofstream::out | ofstream::app);
    while(cin>>num){
        solve(out,num);
    }
    return 0;
}