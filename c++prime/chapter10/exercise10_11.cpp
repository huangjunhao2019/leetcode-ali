#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
bool cmp(const string &s1,const string &s2){
    return s1.size()<s2.size();
}
int main(){
    vector<string> vec={"4321","3412","1234"};
    stable_sort(vec.begin(),vec.end(),cmp);
    for(auto &str:vec){
        cout<<str<<endl;
    }
    return 0;
}