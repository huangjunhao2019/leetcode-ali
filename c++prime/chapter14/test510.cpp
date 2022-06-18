#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(const int &a,const int &b){
    return a>b;
}
int main(){
    vector<int> nums;
    for(int i=0;i<10;++i){
        nums.push_back(i);
    }
    sort(nums.begin(),nums.end(),greater<int>());
    for(auto &num:nums){
        cout<<num<<endl;
    }
    return 0;
}