#include<iostream>
#include<vector>
using namespace  std;
void bubble_sort(vector<int> &nums){
    for(int i=0;i<nums.size()-1;i++){
        for(int j=0;j<nums.size()-1-i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
    bubble_sort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
