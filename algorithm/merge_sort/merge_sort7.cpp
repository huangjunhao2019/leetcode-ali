#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &nums,vector<int> &result,int left,int mid,int right){
    int i=left;
    int j=mid+1;
    int loc=left;
    while(i<=mid && j<=right){
        if(nums[i]<nums[j]){
            result[loc]=nums[i];
            loc++;
            i++;
        }
        else{
            result[loc]=nums[j];
            j++;
            loc++;
        }
    }
    while(i<=mid){
        result[loc]=nums[i];
        loc++;
        i++;
    }
    while(j<=right){
        result[loc]=nums[j];
        j++;
        loc++;
    }
    for(int k=left;k<=right;k++){
        nums[k]=result[k];
    }
}
void merge_sort(vector<int> &nums,vector<int> &result,int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        merge_sort(nums,result,left,mid);
        merge_sort(nums,result,mid+1,right);
        merge(nums,result,left,mid,right);
    }
}
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
    vector<int> result(nums.size());
    merge_sort(nums,result,0,nums.size()-1);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}