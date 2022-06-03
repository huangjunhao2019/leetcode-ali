#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void elimDups(vector<string> &v){
    sort(v.begin(),v.end());
    auto newEnd=unique(v.begin(),v.end());
    v.erase(newEnd,v.end());
}
void biggies(vector<string> &v,int sz){
    elimDups(v);
    auto cmp=[](const string &lhs,const string &rhs){
        return lhs.size()<rhs.size();
    };
    stable_sort(v.begin(),v.end(),cmp);
    auto wc=find_if(v.begin(),v.end(),[sz](const string &s){return s.size()<=sz;});
    for_each(wc,v.end(),[](const string &s){
        cout<<s<<" ";
    });
}
int main(){
    vector<string> v={"1234","1234","hi~","huang"};
    biggies(v,3);
    cout<<endl;
    return 0;
}