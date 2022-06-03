#include<iostream>
#include<list>
//#include<vector>
#include<algorithm>
using namespace std;
int main(){
    list<int> l={1,2,3,4,0,5};
    auto it=find(l.crbegin(),l.crend(),0);
    //cout<<l.rend()-it-1<<endl;
    cout<<distance(it,l.crend())<<endl;
    return 0;
}