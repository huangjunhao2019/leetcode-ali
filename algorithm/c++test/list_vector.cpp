#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    list<int> a;
    vector<int> b;
    for(int i=0;i<10;i++){
        a.push_back(10-i);
        b.push_back(10-i);
    }
    auto it=a.begin();
    cout<<*it<<endl;
    it++;
    it++;
    cout<<*(it)<<endl;
    auto itb=b.begin();
    cout<<*(itb)<<endl;
    cout<<*(itb+2)<<endl;
    return 0;
}