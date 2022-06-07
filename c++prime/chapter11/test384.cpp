#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int> ivec={2,4,6,8,2,4,6,8};
    set<int> set1(ivec.begin(),ivec.end());
    set<int> set2;
    set2.insert(ivec.begin(),ivec.end());
    for(auto it=set1.begin();it!=set1.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=set2.begin();it!=set2.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}