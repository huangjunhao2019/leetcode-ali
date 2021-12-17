#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=1;
    int b=2;
    pair<int,int> c={a,b};
    cout<<c.first<<" "<<c.second<<endl;
    vector<pair<int,int>> nums;
    nums.push_back({a,b});
    cout<<nums[0].first<<" "<<nums[0].second<<endl;
    return 0;
}