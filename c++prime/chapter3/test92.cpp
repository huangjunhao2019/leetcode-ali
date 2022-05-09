#include<iostream>
#include<string>
using  namespace std;
int main(){
    string s="Hello World!!!";
    int count=0;
    for(auto ch:s){
        if(ispunct(ch)){
            count++;
        }
    }
    cout<<count<<" punctuation characters in "<<s<<endl;
    return 0;
}