#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;
bool isLess6(const string &s,int sz){
    return s.size()<=sz;
}
int main(){
    vector<string> authors={"1234567","1234","1234567890","1234567","12345"};
    cout<<count_if(authors.begin(),authors.end(),bind(isLess6,_1,6))<<endl;
    return 0;
}