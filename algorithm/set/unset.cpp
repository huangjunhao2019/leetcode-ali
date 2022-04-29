#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(i);
    }
    unordered_set<int> us(nums.begin(),nums.end());
    for(auto num:us){
        cout<<num<<endl;
    }
    return 0;
}