#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace  std;
int main(){
    vector<int> ivec;
    for(int i=0;i<10;++i){
        ivec.push_back(i);
        ivec.push_back(i);
    }
    set<int> iset(ivec.begin(),ivec.end());
    multiset<int> miset(ivec.begin(),ivec.end());
    cout<<ivec.size()<<endl;
    cout<<iset.size()<<endl;
    cout<<miset.size()<<endl;
    return 0;
}
