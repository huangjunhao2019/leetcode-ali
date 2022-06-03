#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;
bool checkSize(const string &s,int i){
    return i>s.size();
}
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    string s="huang";

    auto it=find_if(v.begin(),v.end(),bind(checkSize,s,_1));
    if(it!=v.end()){
        cout<<*it<<endl;
    }
    return 0;
}