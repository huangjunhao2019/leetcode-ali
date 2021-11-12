#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &nums,int idx,int max){
    int left=idx*2+1;
    int right=idx*2+2;
    int largest=idx;
    if(left<max && nums[largest]<nums[left]){
        largest=left;
    }
    if(right<max && nums[largest]<nums[right]){
        largest=right;
    }
    if(idx!=largest){
        swap(nums[idx],nums[largest]);
        heapify(nums,largest,max);
    }
}
void buildHeap(vector<int> &nums){
    for(int i=nums.size()/2-1;i>=1;i--){
        heapify(nums,i,nums.size());
    }
}
void heap_sort(vector<int> &nums){
    buildHeap(nums);
    for(int i=nums.size()-1;i>=1;i--){
        swap(nums[i],nums[0]);
        heapify(nums,0,i);
    }
}
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
    heap_sort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}