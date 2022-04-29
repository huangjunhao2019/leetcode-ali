#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(i);
    }
    auto cmp=[](int &a,int &b){
        return a>b;
    };
    sort(nums.begin(),nums.end(),cmp);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}