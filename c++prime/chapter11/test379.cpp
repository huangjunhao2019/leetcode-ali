#include<set>
#include<iostream>
using namespace std;
int main(){
    auto cmp=[](const int &a,const int &b){
        return a<b;
    };
    set<int,decltype(cmp)> orderSet(cmp);
    for(int i=0;i<10;++i){
        orderSet.insert(i);
    }
    for(auto &num:orderSet){
        cout<<num<<endl;
    }
    return 0;
}
