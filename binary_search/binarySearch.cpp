#include<iostream>
#include<vector>
using namespace std;
int less_search(vector<int> &nums,int target){
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]>=target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return right;
}
int more_search(vector<int> &nums,int target){
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]<=target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return left==nums.size()?-1:left;
}
int less_or_equal_search(vector<int> &nums,int target){
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]>target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return right;
}
int more_or_equal_search(vector<int> &nums,int target){
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return left==nums.size()?-1:left;
}
int main(){
    vector<int> nums={0,0,1,2,3,4,5,5,6};
    int num=5;
    cout<<less_search(nums,num)<<endl;
    cout<<more_search(nums,num)<<endl;
    cout<<less_or_equal_search(nums,num)<<endl;
    cout<<more_or_equal_search(nums,num)<<endl;
    return 0;
}