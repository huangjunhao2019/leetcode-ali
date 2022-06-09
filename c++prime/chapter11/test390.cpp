#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums;
    for(int i=0;i<10;++i){
        nums.push_back(i);
        nums.push_back(i);
    }
    int aim;
    while(cin>>aim){
        cout<<lower_bound(nums.begin(),nums.end(),aim)-nums.begin()<<endl;
        cout<<upper_bound(nums.begin(),nums.end(),aim)-nums.begin()<<endl;
    }
    return 0;
}