#include<iostream>
#include<vector>
using namespace std;
void select_sort(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        int minIndex=i;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            swap(nums[i],nums[minIndex]);
        }
    }
}
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
    select_sort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}