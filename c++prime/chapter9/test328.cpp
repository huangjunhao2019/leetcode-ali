#include<iostream>
#include<string>
using namespace std;
int main(){
    string num;
    while(cin>>num){
        cout<<stoi(num,0,2)<<endl;
    }
    return 0;
}