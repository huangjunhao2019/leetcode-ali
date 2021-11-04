#include<iostream>
#include<vector>
using namespace std;
int binary_left(vector<int> &nums,int target){
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(target<nums[mid]){
            right=mid-1;
        }
        else if(target>nums[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(left<nums.size() && nums[left]==target)
        return left;
    return -1;
}
int binary_right(vector<int> &nums,int target){
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target){
            left=mid+1;
        }
        else if(target<nums[mid]){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    if(right>=0 && nums[right]==target)
        return right;
    return -1;
}
int main(){
    vector<int> nums;
    for(int i=0;i<5;i++){
        nums.push_back(i);
    }
    for(int i=0;i<3;i++){
        nums.push_back(7);
    }
    int left=binary_left(nums,7);
    int right=binary_right(nums,7);
    return 0;
}