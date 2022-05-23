#include<iostream>
#include<string> 
#include<vector>
using namespace std;
/*
    * We use this program to verify the cin is inputed one by one splited by space.
*/
int main(){
    vector<string> vec;
    string s;
    while(cin>>s){
        vec.push_back(s);
    }
    for(const auto &str:vec){
        cout<<str<<endl;
    }
    return 0;
}