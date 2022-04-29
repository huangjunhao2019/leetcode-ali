#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> mp;
    for(int i=0;i<10;i++){
        mp[i]=i;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second==1){
            mp.erase(it);
        }
        //cout<<it->second<<endl;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<endl;
    }
    return 0;
}