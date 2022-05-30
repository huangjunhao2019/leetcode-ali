#include<iostream>
#include<vector>
#include<list>
using namespace std;
/*
    *注意&运算符与==的优先级，==优先级更高
    *
*/
int main(){
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    vector<int> vec(ia,end(ia));
    list<int> lst(ia,end(ia));
    for(auto it=lst.begin();it!=lst.end();){
        if((*it&1)==1){
            it=lst.erase(it);
        }
        else{
            ++it;
        }
    }
    for(auto it=vec.begin();it!=vec.end();){
        if((*it&1)==0){
            it=vec.erase(it);
        }
        else{
            cout<<*it<<endl;
            ++it;
        }
    }
    for(auto &num:lst){
        cout<<num<<" ";
    }
    cout<<endl;
    for(auto &num:vec){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}