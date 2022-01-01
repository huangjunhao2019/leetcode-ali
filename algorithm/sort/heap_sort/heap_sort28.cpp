#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &nums,int idx,int max){
    int left=idx*2+1;
    int right=idx*2+2;
    int largest=idx;
    if(left<max && nums[left]>nums[largest]){
        largest=left;
    }
    if(right<max && nums[right]>nums[largest]){
        largest=right;
    }
    if(largest!=idx){
        swap(nums[largest],nums[idx]);
        heapify(nums,largest,max);
    }
}
void buildHeap(vector<int> &nums){
    for(int i=nums.size()/2-1;i>=0;i--){
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