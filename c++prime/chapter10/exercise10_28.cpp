#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

void print(list<int> &ls){
    for(auto &num:ls){
        cout<<num<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    list<int> list1;
    copy(vec.begin(),vec.end(),inserter(list1,list1.begin()));
    print(list1);

    list<int> list2;
    copy(vec.begin(),vec.end(),back_inserter(list2));
    print(list2);

    list<int> list3;
    copy(vec.begin(),vec.end(),front_inserter(list3));
    print(list3);

    return 0;
}