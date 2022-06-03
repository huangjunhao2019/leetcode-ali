#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int bigerThan(vector<string> &v){
    return count_if(v.begin(),v.end(),[](const string &s){return s.size()>6;});
}
int main(){
    vector<string> v={"1234","123456","1234567","1234567"};
    cout<<bigerThan(v)<<endl;
    return 0;
}