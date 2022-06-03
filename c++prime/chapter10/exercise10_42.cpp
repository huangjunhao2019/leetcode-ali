#include<iostream>
#include<string>
#include<list>
using namespace std;
void elimDups(list<string> &l){
    l.sort();
    l.unique();
}
int main(){
    list<string> l={"aa","aaa","ab","aa"};
    elimDups(l);
    for(auto &e:l){
        cout<<e<<endl;
    }
    return 0;
}