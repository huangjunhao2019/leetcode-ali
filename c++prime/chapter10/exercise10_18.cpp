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
    auto pivot=partition(v.begin(),v.end(),[sz](const string &s){
        if(s.size()>=sz){
            return true;
        }
        return false;
    });
    for(auto it=v.begin();it!=pivot;++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    vector<string> v={"1234","1234","hi~","huang"};
    biggies(v,3);
    cout<<endl;
    return 0;
}