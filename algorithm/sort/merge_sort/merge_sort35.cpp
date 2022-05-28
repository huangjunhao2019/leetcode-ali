#include<iostream>
#include<vector>
using namespace std;
void merge_sort(vector<int> &nums,vector<int> &res,int left,int right);
void merge(vector<int> &nums,vector<int> &res,int left,int mid,int right);
int  main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
    vector<int> res(nums.begin(),nums.end());
    merge_sort(nums,res,0,nums.size()-1);
    for(int i=0;i<nums.size();++i){
        cout<<nums[i]<<endl;
    }
    return 0;
}
void merge_sort(vector<int> &nums,vector<int> &res,int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        merge_sort(res,nums,left,mid);
        merge_sort(res,nums,mid+1,right);
        merge(res,nums,left,mid,right);
    }
}
void merge(vector<int> &nums,vector<int> &res,int left,int mid,int right){
    int i=left;
    int j=mid+1;
    int loc=left;
    while(i<=mid && j<=right){
        if(nums[i]<nums[j]){
            res[loc]=nums[i];
            i++;
            loc++;
        }
        else{
            res[loc]=nums[j];
            j++;
            loc++;
        }
    }
    while(i<=mid){
        res[loc]=nums[i];
        loc++;
        i++;
    }
    while(j<=right){
        res[loc]=nums[j];
        j++;
        loc++;
    }
}