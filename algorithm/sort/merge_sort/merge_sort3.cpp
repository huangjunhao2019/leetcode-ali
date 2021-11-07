#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &nums,int left,int mid,int right){
    int i=left;
    int j=mid+1;
    vector<int> temp(right-left+1);
    int loc=0;
    while(i<=mid && j<=right){
        if(nums[i]<nums[j]){
            temp[loc]=nums[i];
            loc++;
            i++;
        }
        else{
            temp[loc]=nums[j];
            j++;
            loc++;
        }
    }
    while(i<=mid){
        temp[loc]=nums[i];
        loc++;
        i++;
    }
    while(j<=right){
        temp[loc]=nums[j];
        j++;
        loc++;
    }
    for(int k=left;k<=right;k++){
        nums[k]=temp[k-left];
    }
}
void merge_sort(vector<int> &nums,int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        merge_sort(nums,left,mid);
        merge_sort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }
}
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
    merge_sort(nums,0,nums.size()-1);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return  0;
}