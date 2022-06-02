#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
//#include<string>
using namespace std;
bool predicate(const string &s){
    return s.size()>=5;
}
int main(){
    vector<string> v={"a","as","aasss","aaaaasssss","aaa"};
    auto piovt=partition(v.begin(),v.end(),predicate);
    for(auto it=v.begin();it!=v.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}