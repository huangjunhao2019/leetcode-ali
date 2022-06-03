#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums={-1,2,-3};
    transform(nums.begin(),nums.end(),nums.begin(),[](int i){if(i<0) return -i;else return i;});
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}