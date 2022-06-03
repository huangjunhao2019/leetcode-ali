#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int x;
int fun(){
    ::x=0;
    return 0;
}
int main(){
    vector<string> vec={"have","a","nice","day"};
    stable_sort(vec.begin(),vec.end(),[](const string &a,const string &b){return a.size()<b.size();});
    for(auto &str:vec){
        cout<<str<<endl;
    }
    return 0;
}