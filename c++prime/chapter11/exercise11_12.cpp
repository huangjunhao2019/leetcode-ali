#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;
int main(){
    vector<pair<string,int>> vec;
    string str;
    int val;
    while(cin>>str>>val){
        vec.push_back({str,val});
    }
    for(auto &p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}