#include<iostream>
#include<vector>
using namespace std;
static int count=0;
void merge(vector<int> &nums,vector<int> &result,int left,int mid,int right){
    count++;
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
        int mid=left+(right-left)/2;
        merge_sort(result,nums,left,mid);
        merge_sort(result,nums,mid+1,right);
        merge(result,nums,left,mid,right);
    }
}
int main(){
    vector<int> nums;
    vector<int> result;
    while(true){
        count=0;
        int n=0;
        nums.clear();
        result.clear();
        //cout<<"Enter a number"<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            nums.push_back(10-i);
            result.push_back(10-i);
        }
        merge_sort(nums,result,0,nums.size()-1);
        cout<<"count: "<<count<<endl;
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}