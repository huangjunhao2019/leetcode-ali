#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &nums,vector<int> &result,int left,int mid,int right){
    int loc=left;
    int i=left;
    int j=mid+1;
    while(i<=mid && j<=right){
        if(nums[i]<nums[j]){
            result[loc]=nums[i];
            i++;
            loc++;
        }
        else{
            result[loc]=nums[j];
            j++;
            loc++;
        }
    }
    while(i<=mid){
        result[loc]=nums[i];
        i++;
        loc++;
    }
    while(j<=right){
        result[loc]=nums[j];
        j++;
        loc++;
    }
}
void merge_sort(vector<int> &nums,vector<int> &result,int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        merge_sort(result,nums,left,mid);
        merge_sort(result,nums,mid+1,right);
        merge(result,nums,left,mid,right);
    }
}
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
    vector<int> result(nums.begin(),nums.end());
    merge_sort(nums,result,0,nums.size()-1);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}