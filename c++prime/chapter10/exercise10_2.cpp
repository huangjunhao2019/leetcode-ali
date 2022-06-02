#include<iostream>
#include<string>
#include<algorithm>
#include<list>
using namespace std;
int main(){
    list<string> l={"aa","aaa","aa","cc"};
    cout<<count(l.begin(),l.end(),"aa")<<endl;
    return 0;
}