#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
    auto cmp=[](const int &a,const int &b){
        if(a<b){
            return true;
        }
        return false;
    };
    sort(nums.begin(),nums.end(),cmp);
    for(auto &ele:nums){
        cout<<ele<<endl;
    }
    return 0;
}