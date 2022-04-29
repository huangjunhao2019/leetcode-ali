#include<iostream>
#include<string>
using namespace std;
string solve(string s){
    //string s="OP";
    string str="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            str.push_back(s[i]);
        }
        else if(s[i]>='A' && s[i]<='Z'){
            str.push_back(s[i]+'a'-'A');
        }
    }
    return str;
}
int main(){
    string s;
    while(true){
        cin>>s;
        cout<<solve(s)<<endl;
    }
    return 0;
}