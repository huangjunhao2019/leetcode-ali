#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;
int main(){
    vector<string> str={"huang","jun","hao","","shaoxing"};
    for(auto it=str.begin();it!=str.end();it++){
        if(it->empty()){
            break;
        }
        for(auto &ch:*it){
            ch=toupper(ch);
        }
    }
    for(auto s:str){
        cout<<s<<" ";
    }
    cout<<endl;
    return 0;
}