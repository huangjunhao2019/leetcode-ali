#include<iostream>
#include<vector>
using namespace std;
int findAim(vector<int> &nums,int aim){
    auto beg=nums.begin();
    auto end=nums.end();
    while(beg!=end){
        auto mid=beg+(end-beg)/2;
        if(*mid==aim){
            return mid-nums.begin();
        }
        else if(*mid<aim){
            beg=mid+1;
        }
        else{
            end=mid;
        }
    }
    return -1;
}
int main(){
    vector<int> nums={1,2,3,4,5};
    //auto beg=nums.begin();
    //auto end=nums.end()-1;
    int aim;
    while(cin>>aim){
        cout<<findAim(nums,aim)<<endl;
    }
    return 0;
}