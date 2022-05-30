#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main(){
    deque<string> input;
    string str;
    while(cin>>str){
        input.push_back(str);
    }
    for(auto it=input.begin();it!=input.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}