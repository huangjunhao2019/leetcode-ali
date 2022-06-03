#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};
    list<int> l;

    copy(v.begin()+3,v.begin()+8,front_inserter(l));
    for(auto &val:l){
        cout<<val<<endl;
    }
    //sort(l.begin(),l.end());
    l.sort();
    return 0;
}