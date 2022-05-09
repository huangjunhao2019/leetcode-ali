#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> strVec;
    string s;
    while(cin>>s){
        strVec.push_back(s);
    }
    for(int i=0;i<strVec.size();i++){
        cout<<strVec[i]<<" ";
    }
    cout<<endl;
    return 0;
} 