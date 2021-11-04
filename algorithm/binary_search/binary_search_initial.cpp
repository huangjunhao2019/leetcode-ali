#include<iostream>
#include<vector>
//如果找不到，left要大于aim，right要小于aim，如果存在这个区间，否则的话，left>=nums.size(),或者，right<0
using namespace std;
void binary_search(vector<int> &nums,int aim){
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==aim)
            return;
        else if(aim<nums[mid]){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
}
int main(){
    vector<int> nums;
    for(int i=0;i<4;i++){
        nums.push_back(i);
    }
    nums.push_back(6);
    binary_search(nums,5);
    return 0;
}