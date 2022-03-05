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
        loc++;
        i++;
    }
    while(j<=right){
        result[loc]=nums[j];
        j++;
        loc++;
    }
}
void merge_sort(vector<int> &nums,vector<int> &result,int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        merge_sort(result,nums,start,mid);
        merge_sort(result,nums,mid+1,end);
        merge(result,nums,start,mid,end);
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